/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 11:33:54 by lbagg             #+#    #+#             */
/*   Updated: 2020/07/09 21:00:54 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *s, ...)
{
	va_list	valist;
	int		i;
	char	*put;
	t_spec	*specs;
	char	type;

	i = 0;
	va_start(valist, s);
	while (*s)
	{
		if (*s == '%' && ++s && (type = what_type((char*)s)))
		{
			specs = make_struct(type);
			what_specifiers(valist, &s, &specs);
			put = what_conversion(valist, (char*)s, specs);
			i += print_everything(&put, specs);
		}
		else
			i += ft_putchar(*s);
		if (*s)
			s++;
	}
	va_end(valist);
	return (i);
}

char	what_type(char *s)
{
	char const	*types = "cspdiuxX%";
	char const	*all = "0123456789.*-cspdiuxX%";

	while (ft_strchr(all, *s) && *s != '\0')
	{
		if (ft_strchr(types, *s))
			return (*s);
		s++;
	}
	return (0);
}

t_spec	*make_struct(char type)
{
	t_spec	*specs;

	if (!(specs = (t_spec*)malloc(sizeof(t_spec))))
		return (NULL);
	specs->type = type;
	specs->width = 0;
	specs->left = 0;
	specs->blanks = ' ';
	specs->asterisk = 0;
	specs->precision = -1;
	specs->dig_sign = 0;
	return (specs);
}

char	*what_conversion(va_list valist, char *s, t_spec *specs)
{
	char	*put;
	char	*str;

	put = NULL;
	if (*s == 'c')
		put = c_conversion(valist);
	else if (*s == 's')
	{
		if (!(str = va_arg(valist, char *)))
			return (ft_strdup("(null)"));
		put = ft_strdup(str);
	}
	else if (*s == 'p')
		put = convert_memory((unsigned long)va_arg(valist, void*), specs);
	else if (*s == 'd' || *s == 'i')
		put = ft_itoa(va_arg(valist, int));
	else if (*s == 'u')
		put = unsigned_itoa(va_arg(valist, unsigned int));
	else if (*s == 'x' || *s == 'X')
		put = convert_hex(va_arg(valist, unsigned int),
		(*s >= 'A' && *s <= 'Z'));
	else if (*s == '%')
		put = ft_strdup("%");
	return (put);
}

char	*c_conversion(va_list valist)
{
	char *put;

	if (!(put = (char*)malloc(sizeof(char) * 2)))
		return (NULL);
	put[0] = va_arg(valist, int);
	put[1] = '\0';
	return (put);
}
