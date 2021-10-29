/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:25:11 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/20 18:13:25 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_chrjoin(char const *s1, char chr)
{
	char	*array;
	size_t	s1_size;

	s1_size = ft_strlen((char *)s1);
	if (s1_size == 0)
		array = malloc(1 + 1);
	else
	{
		array = malloc(s1_size + 1);
		if (!array)
			return (0);
		ft_memmove(array, s1, s1_size);
		s1_size++;
	}
	array[s1_size] = chr;
	array[s1_size + 1] = '\0';
	free((char *)s1);
	return (array);
}
