/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:19:13 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/15 15:08:35 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dst;

	size = ft_strlen((char *)src) + 1;
	dst = malloc(size);
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, src, size);
	return (dst);
}
