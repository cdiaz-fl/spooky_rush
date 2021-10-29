/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:10:30 by aamorin-          #+#    #+#             */
/*   Updated: 2021/06/07 13:03:38 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*aux;
	size_t	j;
	size_t	i;

	aux = (char *)s1;
	j = 0;
	if (*s2 == 0)
		return (aux);
	while (*aux && j <= n)
	{
		i = 0;
		while (aux[i] == s2[i])
		{
			if (i + 1 == ft_strlen((char *)s2) && j + i < n)
				return (aux);
			i++;
		}
		aux++;
		j++;
	}
	return (0);
}
