/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:21:40 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 20:54:39 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

int	ft_free_all(t_map *map_v, int i)
{
	if (i == 1 || i == 2)
		ft_freetab(map_v->split);
	if (i == 1 || i == 2)
		ft_freetab(map_v->map);
	if (i == 1 || i == 2)
		free(map_v->col_down);
	if (i == 1 || i == 2)
		free(map_v->col_up);
	if (i == 1 || i == 2)
		free(map_v->col_right);
	if (i == 1 || i == 2)
		free(map_v->col_left);
	if (i == 2)
		ft_freetab(map_v->opt);
	return (1);
}
