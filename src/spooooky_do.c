/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_do.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:43:07 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 20:36:32 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

t_map	*ft_fill_map(t_map *map_v)
{
	int		col;
	int		row;

	col = -1;
	while (++col < 4)
		map_v->map[0][col + 1] = map_v->col_up[col];
	row = 1;
	col = 0;
	while (row < 5)
	{
		map_v->map[row][0] = map_v->col_left[col];
		map_v->map[row][5] = map_v->col_right[col];
		col++;
		row++;
	}
	col = -1;
	while (++col < 4)
		map_v->map[5][col + 1] = map_v->col_down[col];
	return (map_v);
}

int	ft_do_malloc_map(t_map *map_v)
{
	int	i;

	i = 0;
	map_v->map = (char **)malloc(sizeof(char *) * (6 + 1));
	while (i < 6)
	{
		map_v->map[i] = (char *)malloc(sizeof(char) * (6 + 1));
		ft_memset((void *)map_v->map[i], '0', 6);
		i++;
	}
	map_v->map[i] = NULL;
	map_v = ft_fill_map(map_v);
	return (1);
}

int	ft_do_malloc_col(t_map *map_v)
{
	int	i;
	int	k;

	map_v->col_up = (char *)malloc(sizeof(char) * (4 + 1));
	map_v->col_down = (char *)malloc(sizeof(char) * (4 + 1));
	map_v->col_left = (char *)malloc(sizeof(char) * (4 + 1));
	map_v->col_right = (char *)malloc(sizeof(char) * (4 + 1));
	i = -1;
	while (++i < 4)
		map_v->col_up[i] = map_v->split[i][0];
	k = -1;
	while (++i - 1 < 8 && k++ < 4)
		map_v->col_down[k] = map_v->split[i - 1][0];
	k = -1;
	while (++i - 2 < 12 && ++k < 4)
		map_v->col_left[k] = map_v->split[i - 2][0];
	k = -1;
	while (++i - 3 < 16 && ++k < 4)
		map_v->col_right[k] = map_v->split[i - 3][0];
	map_v->col_up[4] = '\0';
	map_v->col_down[4] = '\0';
	map_v->col_left[4] = '\0';
	map_v->col_right[4] = '\0';
	return (1);
}
