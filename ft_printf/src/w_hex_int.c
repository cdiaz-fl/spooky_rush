/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_hex_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:17:04 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/20 18:32:16 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	w_hex_int(t_flags l_flag, char *front, int i, unsigned long long num)
{
	char	*hexa;

	hexa = get_base(num, 16);
	if (l_flag.type == 'x')
		hexa = ft_str_tolower(hexa);
	if (l_flag.sharp == 1 && ft_strcmp(hexa, "0") != 0)
		i += putstr_c(front, 2);
	if (l_flag.dot_w == -1)
	{
		if (l_flag.num != -1)
			i += putchr_c(' ', l_flag.num - ft_strlen(hexa) - l_flag.nega);
		if (l_flag.nega == 1)
			i += putchr_c('-', 1);
		if (l_flag.dot_f != -1)
			i += putchr_c('0', l_flag.dot_f - ft_strlen(hexa));
		if (l_flag.zero != -1)
			i += putchr_c('0', l_flag.zero - ft_strlen(hexa) - l_flag.nega);
		i += putstr_c(hexa, ft_strlen(hexa));
		if (l_flag.minus != -1)
			i += putchr_c(' ', l_flag.minus - ft_strlen(hexa) - l_flag.nega);
	}
	free(hexa);
	return (i);
}
