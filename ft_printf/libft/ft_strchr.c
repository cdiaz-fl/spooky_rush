/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:19:38 by aamorin-          #+#    #+#             */
/*   Updated: 2021/06/02 12:16:35 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	size_t	i;
	char	c;

	c = character;
	i = ft_strlen((char *)str) + 1;
	while (i--)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (0);
}
