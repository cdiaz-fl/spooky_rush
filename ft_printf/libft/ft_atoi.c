/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:16:23 by aamorin-          #+#    #+#             */
/*   Updated: 2021/06/08 19:05:53 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_max(unsigned long int n, int sign)
{
	unsigned long int	max;

	max = 9223372036854775807;
	if (n > max)
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	else
		return (n * sign);
}

int	ft_atoi(char *str)
{
	size_t				i;
	int					sign;
	unsigned long int	number;

	sign = 1;
	number = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	return (check_max(number, sign));
}
