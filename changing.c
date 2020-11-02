/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   changing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 19:25:15 by lbagg             #+#    #+#             */
/*   Updated: 2020/07/10 17:46:08 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	change_put(char **put, t_spec **specs, int *put_len)
{
	char	*temp;

	fix_specs(specs, ft_strlen(*put));
	temp = *put;
	*put = cut_put(specs, *put);
	free(temp);
	temp = *put;
	*put = add_precision(*put, specs);
	free(temp);
	*put_len = ft_strlen(*put);
}

char	*create_pointer(int *i, int size)
{
	char	*new_put;

	if (!(new_put = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	new_put[0] = '0';
	new_put[1] = 'x';
	(*i) += 2;
	return (new_put);
}

char	*add_precision(char *put, t_spec **specs)
{
	char	*new_put;
	int		i;
	int		len;

	len = ft_strlen(put);
	if (((*specs)->type == 'd' || (*specs)->type == 'i' || (*specs)->type == 'u'
	|| (*specs)->type == 'x' || (*specs)->type == 'X' || (*specs)->type == 'p')
	&& (*specs)->precision != -1 && (*specs)->precision > len)
	{
		i = 0;
		if ((*specs)->type == 'p')
		{
			new_put = create_pointer(&i, (*specs)->precision + 3);
			put += 2;
			len -= 2;
			(*specs)->precision += 2;
		}
		else if (!(new_put = malloc(sizeof(char) * ((*specs)->precision + 1))))
			return (NULL);
		while (i < (*specs)->precision - len)
			new_put[i++] = '0';
		ft_strlcpy(new_put + i, put, len + 1);
		return (new_put);
	}
	return (ft_strdup(put));
}

char	*cut_put(t_spec **specs, char *old)
{
	char	*new;

	if ((*specs)->type == 's' && (*specs)->precision != -1 &&
	(*specs)->precision < (int)ft_strlen(old))
	{
		if (!(new = (char*)malloc(sizeof(char) * ((*specs)->precision + 1))))
			return (NULL);
		ft_strlcpy(new, old, (*specs)->precision + 1);
		return (new);
	}
	else if (((*specs)->type == 'd' || (*specs)->type == 'i') && old[0] == '-')
	{
		(*specs)->dig_sign = 1;
		if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(old)))))
			return (NULL);
		ft_strlcpy(new, old + 1, ft_strlen(old));
		return (new);
	}
	else if (((*specs)->type == 'd' || (*specs)->type == 'i' ||
	(*specs)->type == 'u' || (*specs)->type == 'x' || (*specs)->type == 'X') &&
	old[0] == '0' && (*specs)->precision == 0)
		return (ft_strdup(""));
	else
		return (ft_strdup(old));
	return (new);
}
