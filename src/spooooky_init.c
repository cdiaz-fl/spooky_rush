/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:55:55 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 21:11:02 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

t_map	ft_init_map(t_map map_v)
{
	int		i;
	int		k;
	char	x;

	i = 1;
	while (i < 5)
	{
		k = 1;
		x = '1';
		while (k < 5)
		{
			map_v.map[i][k] = '1';
			k++;
			x++;
		}
		i++;
	}
	return (map_v);
}

t_map	*ft_init_optional_split_2(t_map	*map_v)
{
	ft_strlcpy(map_v->opt[0], "1234\0", 5);
	ft_strlcpy(map_v->opt[1], "1324\0", 5);
	ft_strlcpy(map_v->opt[2], "1342\0", 5);
	ft_strlcpy(map_v->opt[3], "1243\0", 5);
	ft_strlcpy(map_v->opt[4], "1432\0", 5);
	ft_strlcpy(map_v->opt[5], "1423\0", 5);
	ft_strlcpy(map_v->opt[6], "2134\0", 5);
	ft_strlcpy(map_v->opt[7], "2143\0", 5);
	ft_strlcpy(map_v->opt[8], "2314\0", 5);
	ft_strlcpy(map_v->opt[9], "2341\0", 5);
	ft_strlcpy(map_v->opt[10], "2431\0", 5);
	ft_strlcpy(map_v->opt[11], "2413\0", 5);
	ft_strlcpy(map_v->opt[12], "3214\0", 5);
	ft_strlcpy(map_v->opt[13], "3241\0", 5);
	ft_strlcpy(map_v->opt[14], "3124\0", 5);
	ft_strlcpy(map_v->opt[15], "3142\0", 5);
	ft_strlcpy(map_v->opt[16], "3412\0", 5);
	ft_strlcpy(map_v->opt[17], "3421\0", 5);
	ft_strlcpy(map_v->opt[18], "4231\0", 5);
	ft_strlcpy(map_v->opt[19], "4213\0", 5);
	ft_strlcpy(map_v->opt[20], "4321\0", 5);
	ft_strlcpy(map_v->opt[21], "4312\0", 5);
	ft_strlcpy(map_v->opt[22], "4132\0", 5);
	ft_strlcpy(map_v->opt[23], "4123\0", 5);
	return (map_v);
}

t_map	*ft_init_optional_split(t_map	*map_v)
{
	int	i;

	i = 0;
	map_v->opt = (char **)malloc(sizeof(char *) * (24 + 1));
	while (i < 24)
	{
		map_v->opt[i] = (char *)malloc(sizeof(char) * (4 + 1));
		i++;
	}
	map_v->opt[i] = NULL;
	map_v = ft_init_optional_split_2(map_v);
	return (map_v);
}
