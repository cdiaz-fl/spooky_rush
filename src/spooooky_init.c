/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:55:55 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 15:24:17 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

t_map	*ft_init_index(t_map *map_v)
{
	map_v->index.i1_1 = 0;
	map_v->index.i1_2 = 0;
	map_v->index.i1_3 = 0;
	map_v->index.i1_4 = 0;
	map_v->index.i2_1 = 0;
	map_v->index.i2_2 = 0;
	map_v->index.i2_3 = 0;
	map_v->index.i2_4 = 0;
	map_v->index.i3_1 = 0;
	map_v->index.i3_2 = 0;
	map_v->index.i3_3 = 0;
	map_v->index.i3_4 = 0;
	map_v->index.i4_1 = 0;
	map_v->index.i4_2 = 0;
	map_v->index.i4_3 = 0;
	map_v->index.i4_4 = 0;
	return (map_v);
}

t_map	ft_init_map(t_map map_v)
{
	int	i;
	int	k;
	//char x;

	i = 1;
	while (i < 5)
	{
		k = 1;
		//x = '1';
		while (k < 5)
		{
			map_v.map[i][k] = '1';
			k++;
			//x++;
		}
		i++;
	}
	return (map_v);
}

t_map	ft_init(t_map map_v)
{
	int	i;

	i = 0;
	map_v.options = (t_options *)malloc(sizeof(t_options) * (4));
	while (i < 4)
	{
		map_v.options[i].col1 = (char *)malloc(sizeof(char) * (4 + 1));
		map_v.options[i].col2 = (char *)malloc(sizeof(char) * (4 + 1));
		map_v.options[i].col3 = (char *)malloc(sizeof(char) * (4 + 1));
		map_v.options[i].col4 = (char *)malloc(sizeof(char) * (4 + 1));
		ft_memset((void *)map_v.options[i].col1, '\0', 5);
		ft_memset((void *)map_v.options[i].col2, '\0', 5);
		ft_memset((void *)map_v.options[i].col3, '\0', 5);
		ft_memset((void *)map_v.options[i].col4, '\0', 5);
		i++;
	}
	return (map_v);
}
