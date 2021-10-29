/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_address.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:20:18 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/20 19:00:10 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	w_address(t_flags flags_list, unsigned long long number)
{
	char	*hexa;
	int		i;
	int		j;

	i = 0;
	hexa = get_base(number, 16);
	j = ft_strlen(hexa);
	hexa = ft_str_tolower(hexa);
	i += putstr_c("0x", 2);
	if (flags_list.num != -1)
		i += putchr_c(' ', flags_list.num - j - flags_list.nega - 2);
	if (flags_list.nega == 1)
		i += putchr_c('-', 1);
	if (flags_list.zero != -1)
		i += putchr_c('0', flags_list.zero - j - flags_list.nega - 2);
	i += putstr_c(hexa, j);
	if (flags_list.minus != -1)
		i += putchr_c(' ', flags_list.minus - j - flags_list.nega - 2);
	free(hexa);
	return (i);
}
