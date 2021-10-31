/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_logic_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:26:53 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 15:23:41 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

void	ft_force_logic_line1(t_map	*map_v)
{
	if (ft_strlen(map_v->options[1].col1) > 1)
		map_v->map[1][1] = map_v->options[1].col1[map_v->index.i1_1];
	if (ft_strlen(map_v->options[1].col2) > 1)
		map_v->map[1][2] = map_v->options[1].col2[map_v->index.i1_2];
	if (ft_strlen(map_v->options[1].col3) > 1)
		map_v->map[1][3] = map_v->options[1].col3[map_v->index.i1_3];
	if (ft_strlen(map_v->options[1].col4) > 1 )
		map_v->map[1][4] = map_v->options[1].col4[map_v->index.i1_4];
}

int	ft_force_logic(t_map	*map_v)
{
	int	i;

	map_v = ft_init_index(map_v);
	while (ft_check_rows_left(map_v))
	{
		i = 0;
		if (i == 0)
			ft_force_logic_line1(map_v);
		if (map_v->index.i1_1 == 4 && map_v->index.i1_2 == 4
			&& map_v->index.i1_3 == 4 && map_v->index.i1_4 == 4)
		break ;
		/*
		if (i == 1)
			ft_force_logic_line2(map_v);
		if (i == 2)
			ft_force_logic_line3(map_v);
		if (i == 3)
			ft_force_logic_line4(map_v);
		*/
	}
	return (0);
}
