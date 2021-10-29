/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_comma.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:09:14 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/05 09:53:29 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	get_c(char c)
{
	if (c == '\'' || c == '\"')
	{
		if (c == '\'')
			return ('\'');
		return ('\"');
	}
	else if (c == 59)
		return (59);
	else
		return (c);
}

static void	ft_create_fill_array(char *s, char c,
		char **array, size_t array_size)
{
	char	*string;
	size_t	string_size;
	size_t	array_row;
	size_t	i;

	i = -1;
	array_row = 0;
	while (array_size > array_row)
	{
		string_size = 0;
		while (s[++i] != get_c(c) && s[i])
			string_size++;
		if (string_size > 0)
		{
			string = ft_calloc(string_size + 1, sizeof(char));
			ft_memcpy(string, s + i - string_size, string_size);
			array[array_row++] = string;
		}
	}
}

static size_t	ft_get_array_row(char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	size;

	i = 0;
	count = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == get_c(c))
		{
			if (size != 0)
				count++;
			size = 0;
		}
		else
			size++;
		i++;
	}
	if (size != 0)
		size = 1;
	else
		size = 0;
	return (count + size);
}

char	**ft_split_comma(char *s, char c)
{
	size_t		array_row;
	char		**array;

	if (!s)
		return (NULL);
	array_row = ft_get_array_row(s, c);
	if (!ft_strncmp(s, "awk", 3))
		array_row = 2;
	array = malloc((array_row + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	ft_create_fill_array(s, c, array, array_row);
	array[array_row] = NULL;
	return (array);
}
