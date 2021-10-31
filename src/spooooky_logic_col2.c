/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_logic_col2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:37:32 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 13:52:59 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

/*
t_map	*check_options_col2_exits(t_map *map_v, size_t index, int i)
{
	int	pos;

	pos = -1;
	while (++index < 4 && aux[index])
	{
		if (!ft_strchr("1", aux[index])
			&& !ft_strchr(map_v->options[i].col2, '1') && !ft_strchr(aux, '1'))
		{
			map_v->options[i].col2[++pos] = '1';
			index++;
		}
		if (!ft_strchr("2", aux[index])
			&& !ft_strchr(map_v->options[i].col2, '2') && !ft_strchr(aux, '2'))
		{
			map_v->options[i].col2[++pos] = '2';
			index++;
		}
		if (!ft_strchr("3", aux[index])
			&& !ft_strchr(map_v->options[i].col2, '3') && !ft_strchr(aux, '3'))
		{
			map_v->options[i].col2[++pos] = '3';
			index++;
		}
		if (!ft_strchr("4", aux[index])
			&& !ft_strchr(map_v->options[i].col2, '4') && !ft_strchr(aux, '4'))
		{
			map_v->options[i].col2[++pos] = '4';
			index++;
		}
	}
	return (map_v);
}

t_map	*check_options_col2(t_map *map_v, int i)
{
	size_t	index;
	size_t	pos;

	index = -1;
	pos = -1;
	while (ft_strlen(map_v->options[i].col1) > ++index
		&& ft_strlen(map_v->options[i].col1) == 1)
		if (!ft_strchr(aux, map_v->options[i].col1[index]))
			aux[++pos] = map_v->options[i].col1[index];
	index = -1;
	while (ft_strlen(map_v->options[i].col3) > ++index
		&& ft_strlen(map_v->options[i].col3) == 1)
		if (!ft_strchr(aux, map_v->options[i].col3[index]))
			aux[++pos] = map_v->options[i].col3[index];
	index = -1;
	while (ft_strlen(map_v->options[i].col4) > ++index
		&& ft_strlen(map_v->options[i].col4) == 1)
		if (!ft_strchr(aux, map_v->options[i].col4[index]))
			aux[++pos] = map_v->options[i].col4[index];
	map_v = check_options_col2_exits(map_v, -1, i, aux);
	return (map_v);
}
*/
