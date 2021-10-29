/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 10:57:58 by aamorin-          #+#    #+#             */
/*   Updated: 2021/06/07 13:54:19 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*src;

	if (destination == NULL && source == NULL)
		return (NULL);
	i = 0;
	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	if (dest > src)
	{
		while (num--)
			dest[num] = src[num];
	}
	else if (dest < src)
		ft_memcpy(dest, src, num);
	return (dest);
}
