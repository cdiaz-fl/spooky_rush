/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:00:11 by aamorin-          #+#    #+#             */
/*   Updated: 2021/06/01 17:17:33 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;
	size_t	d;

	i = 0;
	d = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n) && !d)
	{
		d = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		i++;
	}
	if ((s1[i] != '\0' || s2[i] != '\0') && (i < n) && !d)
	{
		d = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
	}
	return (d);
}
