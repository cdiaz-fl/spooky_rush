/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 11:32:38 by aamorin-          #+#    #+#             */
/*   Updated: 2021/06/03 13:02:45 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(char str_c, char const *character_to_delete)
{
	while (*character_to_delete)
	{
		if (*character_to_delete == str_c)
			return (1);
		character_to_delete++;
	}
	return (0);
}

static size_t	ft_start(char const *str, char const *character, size_t size)
{
	size_t	i;

	i = 0;
	while (size > i)
	{
		if (!ft_find(str[i], character))
			return (i);
		i++;
	}
	return (i);
}

static size_t	ft_end(char const *str, char const *character, size_t size)
{
	while (size > 0)
	{
		size--;
		if (!ft_find(str[size], character))
			return (size);
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		s1_size;
	size_t		start;
	size_t		end;
	char		*str;

	if (!s1 || !set)
		return (NULL);
	s1_size = ft_strlen((char *)s1);
	start = ft_start(s1, set, s1_size);
	end = ft_end(s1, set, s1_size);
	if (start > end)
		s1_size = 0;
	else
		s1_size = end - start + 1;
	str = malloc((s1_size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (s1_size <= 0)
		return (str);
	ft_memcpy(str, s1 + start, s1_size);
	str[s1_size] = '\0';
	return (str);
}
