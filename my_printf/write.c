/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:34:08 by lbagg             #+#    #+#             */
/*   Updated: 2020/07/10 16:31:13 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_everything(char **put, t_spec *specs)
{
	int		i;
	int		put_len;

	i = 0;
	change_put(put, &specs, &put_len);
	if (specs->type == 'c' || specs->type == '%')
		return (print_chars(&specs, put));
	if (specs->left)
		i += print_left(&specs, put);
	if (specs->width > put_len)
		i += print_width(&specs, put, put_len);
	if (specs->dig_sign)
		i += ft_putchar('-');
	if (!specs->left)
		i += ft_putstr(*put);
	free(specs);
	free(*put);
	return (i);
}

int		print_chars(t_spec **specs, char **put)
{
	int	i;

	i = 1;
	if ((*specs)->left == 1)
		ft_putchar(**put);
	while ((*specs)->width - 1 > 0)
	{
		ft_putchar((*specs)->blanks);
		(*specs)->width--;
		i++;
	}
	if ((*specs)->left == 0)
		ft_putchar(**put);
	free(*specs);
	free(*put);
	return (i);
}

int		print_left(t_spec **specs, char **put)
{
	int		i;

	i = 0;
	if ((*specs)->dig_sign)
	{
		i += ft_putchar('-');
		(*specs)->width--;
		(*specs)->dig_sign = 0;
	}
	i += ft_putstr(*put);
	return (i);
}

int		print_width(t_spec **specs, char **put, int put_len)
{
	int		i;
	char	*temp;

	i = 0;
	if ((*specs)->precision != -1 && (*specs)->type != 's')
		(*specs)->blanks = ' ';
	if ((*specs)->dig_sign)
	{
		(*specs)->width--;
		if ((*specs)->blanks == '0')
		{
			i += ft_putchar('-');
			(*specs)->dig_sign = 0;
		}
	}
	if ((*specs)->type == 'p' && (*specs)->blanks == '0')
	{
		ft_putstr("0x");
		temp = *put;
		*put = ft_strdup(temp + 2);
		i += 2;
		free(temp);
	}
	width(specs, put_len, &i);
	return (i);
}

void	width(t_spec **specs, int put_len, int *i)
{
	while ((*specs)->width > put_len)
	{
		if ((*specs)->width <= (*specs)->precision && (*specs)->type != 's')
			break ;
		ft_putchar((*specs)->blanks);
		(*specs)->width--;
		(*i)++;
	}
}
