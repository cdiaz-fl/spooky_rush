/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_int.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:22:35 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/21 10:05:21 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	dot_int(t_flags flag, char *num_char, int j, size_t i)
{
	if (flag.num != -1)
		j += putchr_c(' ', flag.num - (flag.dot_w - i) - i - flag.nega);
	if (flag.zero != -1 && flag.minus == -1)
	{
		if (flag.dot_w != 0)
			j += putchr_c(' ', flag.zero - (flag.dot_w - i) - i - flag.nega);
		else if (flag.dot_w == 0 && flag.nega == 1)
			j += putchr_c(' ', flag.zero - i - flag.nega);
		else
			j += putchr_c(' ', flag.zero);
	}
	if (flag.nega == 1)
		j += putchr_c('-', 1);
	j += putchr_c('0', flag.dot_w - i);
	if (ft_strcmp(num_char, "0") || (flag.dot_w == 0 && flag.nega == 1))
		j += putstr_c(num_char, i);
	if (flag.minus != 0)
	{
		flag.minus -= flag.dot_w - i;
		j += putchr_c(' ', flag.minus - i - flag.nega);
	}
	return (j);
}

int	w_int_2nd(t_flags l_flag, int count, char *str)
{
	if (l_flag.dot_f != -1)
		count += putchr_c('0', l_flag.dot_f - ft_strlen(str));
	if (l_flag.zero != -1 && l_flag.minus == -1)
		count += putchr_c('0', l_flag.zero - ft_strlen(str) - l_flag.nega);
	if (((ft_strcmp(str, "0") || l_flag.dot_f > 0) || l_flag.dot_f == -1))
		count += putstr_c(str, ft_strlen(str));
	if (l_flag.minus != -1)
		count += putchr_c(' ', l_flag.minus - ft_strlen(str) - l_flag.nega);
	return (count);
}

int	w_int(t_flags l_flag, int number, int count)
{
	char	*str;

	if (number < 0 && number != INT_MIN)
	{
		l_flag.nega = 1;
		number = number * -1;
	}
	str = ft_itoa(number);
	if (l_flag.dot_w != -1)
		count += dot_int(l_flag, str, count, ft_strlen(str));
	else if (l_flag.dot_w == -1)
	{
		if (l_flag.space == 1 && l_flag.nega != 1 && number != INT_MIN)
			count += putchr_c(' ', 1);
		if (l_flag.num != -1)
			count += putchr_c(' ', l_flag.num - ft_strlen(str) - l_flag.nega);
		if (l_flag.nega == 1)
			count += putchr_c('-', 1);
		if (l_flag.plus == 1 && l_flag.nega != 1 && number != INT_MIN)
			count += putchr_c('+', 1);
		count += w_int_2nd(l_flag, 0, str);
	}
	free(str);
	return (count);
}
