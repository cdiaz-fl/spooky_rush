/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_chr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:23:49 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/20 18:30:30 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	w_chr(t_flags flags_list, va_list ap)
{
	char		chr;
	int			count;

	count = 0;
	chr = va_arg (ap, int);
	while (flags_list.num-- > 1 && flags_list.num != -1)
		count += putchr_c(' ', 1);
	count += putchr_c(chr, 1);
	while (flags_list.minus-- > 1 && flags_list.minus != -1)
		count += putchr_c(' ', 1);
	return (count);
}
