/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:56:00 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2021/10/31 20:11:00 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

int	ft_check_rows_left(t_map *map_v)
{
	int		i;
	int		k;
	int		count;
	char	last;

	i = 0;
	while (++i < 5)
	{
		k = 0;
		count = 0;
		last = 0;
		while (++k < 5)
		{
			if (map_v->map[i][k] > last)
			{
				last = map_v->map[i][k];
				count++;
			}
		}
		if (count != map_v->map[i][0] - '0')
			return (0);
	}
	if (!ft_check_rows_right(map_v))
		return (0);
	return (1);
}

int	ft_check_rows_right(t_map *map_v)
{
	int		i;
	int		k;
	int		count;
	char	last;

	i = 0;
	while (++i < 5)
	{
		k = 5;
		count = 0;
		last = 0;
		while (--k > 0)
		{
			if (map_v->map[i][k] > last)
			{
				last = map_v->map[i][k];
				count++;
			}
		}
		if (count != map_v->map[i][5] - '0')
			return (0);
	}
	if (!ft_check_cols_up(map_v))
		return (0);
	return (1);
}

int	ft_check_cols_up(t_map *map_v)
{
	int		i;
	int		k;
	int		count;
	char	last;

	k = 0;
	while (++k < 5)
	{
		i = 0;
		count = 0;
		last = 0;
		while (++i < 5)
		{
			if (map_v->map[i][k] > last)
			{
				last = map_v->map[i][k];
				count++;
			}
		}
		if (count != map_v->map[0][k] - '0')
			return (0);
	}
	if (!ft_check_cols_down(map_v))
		return (0);
	return (1);
}

int	ft_check_cols_down(t_map *map_v)
{
	int		i;
	int		k;
	int		count;
	char	last;

	k = 0;
	while (++k < 5)
	{
		i = 5;
		count = 0;
		last = 0;
		while (--i > 0)
		{
			if (map_v->map[i][k] > last)
			{
				last = map_v->map[i][k];
				count++;
			}
		}
		if (count != map_v->map[5][k] - '0')
			return (0);
	}
	return (1);
}
