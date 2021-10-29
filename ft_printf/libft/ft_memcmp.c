/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:53:24 by aamorin-          #+#    #+#             */
/*   Updated: 2021/06/01 15:17:19 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned const char	*str1;
	unsigned const char	*str2;

	if (num == 0)
		return (0);
	str1 = (unsigned const char *)ptr1;
	str2 = (unsigned const char *)ptr2;
	while ((*str1 == *str2) && num - 1 > 0)
	{
		str1++;
		str2++;
		num--;
	}
	return (*str1 - *str2);
}
