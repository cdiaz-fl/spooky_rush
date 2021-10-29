/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:09:09 by aamorin-          #+#    #+#             */
/*   Updated: 2021/06/01 13:45:59 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t				i;
	unsigned char		*dest;
	unsigned char		*src;

	if (destination == NULL && source == NULL)
		return (NULL);
	i = 0;
	src = (unsigned char *) source;
	dest = (unsigned char *) destination;
	while (num > i)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
