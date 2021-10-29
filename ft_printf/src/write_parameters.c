/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_parameters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:13:42 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/21 10:07:01 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	write_parameters(t_flags flags_list, va_list ap)
{
	if (flags_list.dot_w == 0 && flags_list.minus != -1)
		flags_list.dot_w = 1;
	if (flags_list.type == 's')
		return (w_string(flags_list, ap));
	if (flags_list.type == 'c')
		return (w_chr(flags_list, ap));
	if (flags_list.type == 'i' || flags_list.type == 'd')
		return (w_int(flags_list, va_arg (ap, int), 0));
	if (flags_list.type == 'u')
		return (w_unsint(flags_list, va_arg (ap, unsigned int)));
	if (flags_list.type == 'p')
		return (w_address(flags_list, va_arg (ap, unsigned long long)));
	if (flags_list.type == 'x')
		return (w_hex_int(flags_list, "0x", 0,
				va_arg (ap, unsigned int)));
	if (flags_list.type == 'X')
		return (w_hex_int(flags_list, "0X", 0,
				va_arg (ap, unsigned int)));
	return (0);
}
