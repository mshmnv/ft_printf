/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 14:08:55 by lbagg             #+#    #+#             */
/*   Updated: 2020/07/09 20:21:50 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_specifiers
{
	char		type;
	int			width;
	int			left;
	char		blanks;
	int			asterisk;
	int			precision;
	int			dig_sign;
}				t_spec;

int				ft_printf(const char *s, ...);
char			what_type(char *s);
t_spec			*make_struct(char type);
char			*what_conversion(va_list valist, char *s, t_spec *specs);
char			*c_conversion(va_list valist);
char			*convert_memory(unsigned long p, t_spec *specs);
char			*convert_hex(unsigned int p, int big);
char			*unsigned_itoa(unsigned int n);
void			what_specifiers(va_list valist, const char **s, t_spec **specs);
int				what_width(va_list valist, const char **s);
int				what_precision(va_list valist, const char **s);
void			fix_specs(t_spec **specs, int put_len);
int				print_everything(char **put, t_spec *specs);
int				print_chars(t_spec **specs, char **put);
int				print_left(t_spec **specs, char **put);
int				print_width(t_spec **specs, char **put, int put_len);
void			width(t_spec **specs, int put_len, int *i);
void			change_put(char **put, t_spec **specs, int *put_len);
char			*create_pointer(int *i, int size);
char			*add_precision(char *put, t_spec **specs);
char			*cut_put(t_spec **specs, char *old);
int				ft_putstr(char *s);
int				ft_putchar(char c);

#endif
