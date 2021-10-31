/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_logic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:26:53 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 16:34:56 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

/*
t_map	*ft_save(t_map *map_v, int i, int k, int x)
{
	if (k == 1)
		map_v->options[i - 1].col1[0] = x;
	if (k == 2)
		map_v->options[i - 1].col2[0] = x;
	if (k == 3)
		map_v->options[i - 1].col3[0] = x;
	if (k == 4)
		map_v->options[i - 1].col4[0] = x;
	return (map_v);
}

int	ft_set_four_aux(t_map *map_v, int real_i, int real_k)
{
	int	i;
	int	k;
	int	x;

	i = 1;
	k = 1;
	x = '1';
	while ((real_k == 0) && k < 5)
	{
		map_v->map[real_i][k] = x;
		map_v = ft_save(map_v, real_i, k, x);
		x++;
		k++;
	}
	while ((real_i == 0) && i < 5)
	{
		map_v->map[i][real_k] = x;
		map_v = ft_save(map_v, i, real_k, x);
		x++;
		i++;
	}
	return (1);
}

void	ft_set_four(t_map *map_v, int real_i, int real_k)
{
	int	i;
	int	k;
	int	x;

	i = 1;
	k = 1;
	x = '4';
	if (real_i == 0 || real_k == 0)
		if (ft_set_four_aux(map_v, real_i, real_k))
			return ;
	while ((real_k == 5) && k < 5)
	{
		map_v->map[real_i][k] = x;
		map_v = ft_save(map_v, real_i, k, x);
		x--;
		k++;
	}
	while ((real_i == 5) && i < 5)
	{
		map_v->map[i][real_k] = x;
		map_v = ft_save(map_v, i, real_k, x);
		x--;
		i++;
	}
}

void	ft_basic_logic(t_map *map_v)
{
	int	i;
	int	k;

	i = 0;
	while (i <= 5)
	{
		k = 0;
		while (k <= 5)
		{
			if (map_v->map[i][k] == '4')
			{
				if ((i == 0 && (k > 0 && k < 6)) || (i == 5 && (k > 0 && k < 6))
					|| (k == 0 && (i > 0 && i < 6))
					|| (k == 5 && (i > 0 && i < 6)))
					ft_set_four(map_v, i, k);
			}
			k++;
		}
		i++;
	}
}
*/
