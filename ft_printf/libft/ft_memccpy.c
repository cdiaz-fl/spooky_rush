/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 10:31:58 by aamorin-          #+#    #+#             */
/*   Updated: 2021/06/02 07:34:25 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t num)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*src;

	i = 0;
	src = source;
	dest = destination;
	while (num > i)
	{
		dest[i] = src[i];
		if (dest[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
