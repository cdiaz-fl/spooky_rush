/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_logic_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:26:53 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 16:32:43 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

/*
t_map	*check_options(t_map *map_v, int i, int k)
{
	if (k == 1)
	{
		//map_v = check_options_col1(map_v, i, aux);
		if (ft_strlen(map_v->options[i].col1) == 0)
			ft_memcpy(map_v->options[i].col1, "1234\0", 5);
	}
	if (k == 2)
	{
		//map_v = check_options_col2(map_v, i, aux);
		if (ft_strlen(map_v->options[i].col2) == 0)
			ft_memcpy(map_v->options[i].col2, "1234\0", 5);
	}
	if (k == 3)
	{
		//map_v = check_options_col3(map_v, i, aux);
		if (ft_strlen(map_v->options[i].col3) == 0)
			ft_memcpy(map_v->options[i].col3, "1234\0", 5);
	}
	if (k == 4)
	{
		//map_v = check_options_col4(map_v, i, aux);
		if (ft_strlen(map_v->options[i].col4) == 0)
			ft_memcpy(map_v->options[i].col4, "1234\0", 5);
	}
	return (map_v);
}

void	ft_options_logic(t_map	*map_v)
{
	int		i;

	map_v->max_move = 0;
	i = 0;
	while (i < 4)
	{
		if (ft_strlen(map_v->options[i].col1) == 0)
		{
			map_v = check_options(map_v, i, 1);
			map_v->max_move += ft_strlen(map_v->options[i].col1);
		}
		if (ft_strlen(map_v->options[i].col2) == 0)
		{
			map_v = check_options(map_v, i, 2);
			map_v->max_move += ft_strlen(map_v->options[i].col2);
		}
		if (ft_strlen(map_v->options[i].col3) == 0)
		{
			map_v = check_options(map_v, i, 3);
			map_v->max_move += ft_strlen(map_v->options[i].col3);
		}
		if (ft_strlen(map_v->options[i].col4) == 0)
		{
			map_v = check_options(map_v, i, 4);
			map_v->max_move += ft_strlen(map_v->options[i].col4);
		}
		i++;
	}
}
*/
