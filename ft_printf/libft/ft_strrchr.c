/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:29:19 by aamorin-          #+#    #+#             */
/*   Updated: 2021/06/02 12:17:10 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	size_t		i;
	size_t		a;
	char		c;
	char		*string;

	string = NULL;
	i = 0;
	c = character;
	a = ft_strlen((char *)str) + 1;
	while (a--)
	{
		if (*str == c)
			string = (char *)(str + i);
		str++;
	}
	return ((char *)string);
}
