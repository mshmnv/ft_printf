/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 13:42:36 by lbagg             #+#    #+#             */
/*   Updated: 2020/07/09 20:53:26 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*convert_memory(unsigned long p, t_spec *specs)
{
	char const		*base = "0123456789abcdef";
	char			*hex;
	unsigned long	x;
	int				i;

	hex = 0;
	i = 3;
	x = p;
	while (x /= 16)
		i++;
	if (!(hex = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	hex[0] = '0';
	hex[1] = 'x';
	hex[i] = '\0';
	x = p;
	while (--i > 1)
	{
		hex[i] = base[x % 16];
		x /= 16;
	}
	if (specs->precision == 0 && ft_strlen(hex) == 3 && hex[2] == '0')
		hex[2] = '\0';
	return (hex);
}

char	*convert_hex(unsigned int p, int big)
{
	char const		*base = "0123456789abcdef";
	char			*hex;
	unsigned long	x;
	int				i;

	hex = 0;
	i = 1;
	x = p;
	while (x /= 16)
		i++;
	if (!(hex = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	hex[i--] = '\0';
	x = p;
	while (i >= 0)
	{
		if (big && base[x % 16] >= 'a' && base[x % 16] <= 'f')
			hex[i] = base[x % 16] - 32;
		else
			hex[i] = base[x % 16];
		x /= 16;
		i--;
	}
	return (hex);
}

char	*unsigned_itoa(unsigned int n)
{
	char			*res;
	size_t			tens;
	int				des;
	size_t			i;
	unsigned int	x;

	i = 0;
	des = 1;
	tens = 1;
	x = n;
	while (x /= 10)
		tens++;
	if (!(res = ft_calloc(tens + 1, sizeof(char))))
		return (NULL);
	while (tens-- > 1)
		des *= 10;
	while (des > 0)
	{
		res[i] = n / des + '0';
		i++;
		n %= des;
		des /= 10;
	}
	return (res);
}
