/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:50:49 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/13 15:46:37 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	char	*dest_2;
	char	*src_2;
	size_t	size_2;
	size_t	dest_size;

	dest_2 = dest;
	src_2 = src;
	size_2 = size;
	while (size_2-- != 0 && *dest_2 != '\0')
		dest_2++;
	dest_size = dest_2 - dest;
	size_2 = size - dest_size;
	if (size_2 == 0)
		return (dest_size + ft_strlen(src_2));
	while (*src_2 != '\0')
	{
		if (size_2 != 1)
		{
			*dest_2++ = *src_2;
			size_2--;
		}
		src_2++;
	}
	*dest_2 = '\0';
	return (dest_size + (src_2 - src));
}
