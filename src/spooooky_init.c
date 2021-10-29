/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:55:55 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/29 18:20:18 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/spooooky_lib.h"

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
		map_v.options[i].col1 = "1234\0";
		map_v.options[i].col2 = "1234\0";
		map_v.options[i].col3 = "1234\0";
		map_v.options[i].col4 = "1234\0";
		i++;
	}
	ft_printf("%d\n", sizeof(char));
	return (map_v);
}
