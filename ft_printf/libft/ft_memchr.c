/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:47:04 by aamorin-          #+#    #+#             */
/*   Updated: 2021/05/27 10:04:50 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *buf, int ch, size_t length)
{
	unsigned char	*dest;

	dest = (unsigned char *)buf;
	while (length-- > 0)
	{
		if (*dest != (unsigned char)ch)
			dest++;
		else
			return (dest);
	}
	return (0);
}
