/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:35:34 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 20:17:54 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

int	ft_hand_errors(t_map *map_v)
{
	int	i;

	i = -1;
	while (++i < 4 && map_v->col_up[i])
	{
		if (map_v->col_up[i] == '4' && map_v->col_down[i] != '1')
			return (1);
		if (map_v->col_up[i] == '3'
			&& (map_v->col_down[i] == '3' || map_v->col_down[i] == '4'))
			return (1);
		if (map_v->col_up[i] == '2' && map_v->col_down[i] == '4')
			return (1);
		if (map_v->col_up[i] == '1' && map_v->col_down[i] == '1')
			return (1);
		if (map_v->col_left[i] == '4' && map_v->col_right[i] != '1')
			return (1);
		if (map_v->col_left[i] == '3'
			&& (map_v->col_right[i] == '3' || map_v->col_right[i] == '4'))
			return (1);
		if (map_v->col_left[i] == '2' && map_v->col_right[i] == '4')
			return (1);
		if (map_v->col_left[i] == '1' && map_v->col_right[i] == '1')
			return (1);
	}
	return (0);
}
