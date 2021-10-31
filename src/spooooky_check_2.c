/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_check_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:39:13 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 20:10:54 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

int	ft_check_duplicity_h(t_map *map_v, int i, int j)
{
	int	k;

	k = 0;
	while (++k < 5)
	{
		if (map_v->map[i][j] == map_v->map[k][j] && i != k)
			return (0);
	}
	return (1);
}

int	ft_check_duplicity_w(t_map *map_v, int i, int j)
{
	int	k;

	k = 0;
	while (++k < 5)
	{
		if (map_v->map[i][j] == map_v->map[i][k] && j != k)
			return (0);
	}
	return (1);
}

int	ft_check_duplicity(t_map *map_v)
{
	int	i;
	int	j;

	i = 0;
	while (++i < 5)
	{
		j = 0;
		while (++j < 5)
		{
			if (!ft_check_duplicity_h(map_v, i, j))
				return (0);
			if (!ft_check_duplicity_w(map_v, i, j))
				return (0);
		}
	}
	return (1);
}
