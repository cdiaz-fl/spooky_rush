/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:28:35 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/07 13:00:54 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_int_size(int n)
{
	size_t	int_size;

	if (n < 0)
		int_size = 1;
	else
		int_size = 0;
	while (1)
	{
		n /= 10;
		int_size++;
		if (n == 0)
			break ;
	}
	return (int_size);
}

static char	*convert_int_char(char *str, long number, size_t size)
{
	if (number < 0)
	{
		str[0] = '-';
		number *= -1;
	}
	str[size] = '\0';
	while (1)
	{
		str[size - 1] = (number % 10) + '0';
		number /= 10;
		size--;
		if (number == 0)
			break ;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	long	number;

	number = n;
	i = get_int_size(number);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = convert_int_char(str, number, i);
	return (str);
}
