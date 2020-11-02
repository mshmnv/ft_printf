/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:26:57 by lbagg             #+#    #+#             */
/*   Updated: 2020/07/09 16:30:19 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	what_specifiers(va_list valist, const char **s, t_spec **specs)
{
	while (**s == '-' || **s == '0' || ft_isdigit(**s)
	|| **s == '*' || **s == '.')
	{
		if (**s == '-')
		{
			(*specs)->left = 1;
			(*specs)->blanks = ' ';
		}
		if (**s == '0' && !(*specs)->left)
			(*specs)->blanks = '0';
		if ((ft_isdigit(**s) || **s == '*') && **s != '0')
		{
			if (((*specs)->width = what_width(valist, s)) < 0)
			{
				(*specs)->left = 1;
				(*specs)->width *= -1;
				(*specs)->blanks = ' ';
			}
		}
		else if (**s == '.')
			(*specs)->precision = what_precision(valist, s);
		else
			(*s)++;
	}
}

int		what_width(va_list valist, const char **s)
{
	int width;

	width = 0;
	while (**s >= '0' && **s <= '9')
	{
		width = width * 10 + **s - 48;
		(*s)++;
	}
	if (**s == '*')
	{
		width = va_arg(valist, int);
		(*s)++;
	}
	return (width);
}

int		what_precision(va_list valist, const char **s)
{
	int prec;

	prec = 0;
	(*s)++;
	if (ft_isdigit(**s))
	{
		while (**s >= '0' && **s <= '9')
		{
			prec = prec * 10 + **s - 48;
			(*s)++;
		}
	}
	else if (**s == '*')
	{
		prec = va_arg(valist, int);
		(*s)++;
	}
	if (prec < 0)
		return (-1);
	return (prec);
}

void	fix_specs(t_spec **specs, int put_len)
{
	if (((*specs)->type == 'd') || ((*specs)->type == 'i') ||
	((*specs)->type == 'u') || (*specs)->type == 'p' ||
	((*specs)->type == 'x') || ((*specs)->type == 'X' || (*specs)->type == 'c'))
	{
		if (((*specs)->precision > put_len))
			(*specs)->blanks = '0';
	}
}
