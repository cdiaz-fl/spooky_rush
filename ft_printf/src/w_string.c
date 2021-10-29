/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_string.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:24:44 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/23 16:37:45 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	dot_string(t_flags flags_list, char *string, int count, int i)
{
	if (flags_list.num != -1)
		count += putchr_c(' ', flags_list.num - (flags_list.dot_w - i) - i);
	if (flags_list.dot_w > -1 && i > flags_list.dot_w)
		count += putstr_c(string, flags_list.dot_w);
	else
		count += putstr_c(string, i);
	if (flags_list.minus != -1)
		count += putchr_c(' ', flags_list.minus - (flags_list.dot_w - i) - i);
	return (count);
}

int	w_string(t_flags flags_list, va_list ap)
{
	char	*string;
	int		i;
	int		count;

	count = 0;
	string = va_arg (ap, char *);
	if (string == NULL)
		string = "(null)";
	i = ft_strlen(string);
	if (flags_list.dot_w != -1)
		count += dot_string(flags_list, string, count, i);
	else if (flags_list.dot_w == -1)
	{
		if (flags_list.num != -1)
			count += putchr_c(' ', flags_list.num - i);
		if (flags_list.zero != -1)
			count += putchr_c('0', flags_list.zero - i);
		if (flags_list.dot_f != -1 && i > flags_list.dot_f)
			count += putstr_c(string, flags_list.dot_f);
		else
			count += putstr_c(string, i);
		if (flags_list.minus != -1)
			count += putchr_c(' ', flags_list.minus - i);
	}
	return (count);
}
