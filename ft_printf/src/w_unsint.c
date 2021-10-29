/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_unsint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:21:36 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/21 10:06:31 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	w_unsint(t_flags flags_list, unsigned int number)
{
	char	*num_char;
	int		i;
	int		count;

	count = 0;
	num_char = ft_itoa_unsint(number);
	i = ft_strlen(num_char);
	if (flags_list.dot_w != -1)
		count += dot_int(flags_list, num_char, count, i);
	else if (flags_list.dot_w == -1)
	{
		if (flags_list.num != -1)
			count += putchr_c(' ', flags_list.num - i - flags_list.nega);
		if (flags_list.nega == 1)
			count += putchr_c('-', 1);
		if (flags_list.dot_f != -1)
			count += putchr_c('0', flags_list.dot_f - i);
		if (flags_list.zero != -1)
			count += putchr_c('0', flags_list.zero - i - flags_list.nega);
		count += putstr_c(num_char, i);
		if (flags_list.minus != -1)
			count += putchr_c(' ', flags_list.minus - i - flags_list.nega);
	}
	free(num_char);
	return (count);
}
