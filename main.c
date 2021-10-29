/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:27:44 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/29 16:45:37 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/spooooky_lib.h"

int	main(int a, char **argv)
{
	t_map	map_v;

	if (a != 2)
		return (ft_putstr("Error: wrong arguments\n"));
	map_v.split = ft_split(argv[1], ' ');
	if (ft_arraybilen(map_v.split) != 16)
	{
		free (map_v.split);
		return (ft_putstr("Error: wrong arguments\n"));
	}
	if (!(ft_do_malloc_col(&map_v)) || !(ft_do_malloc_map(&map_v)))
		return (ft_putstr("Error: map error\n"));
	//Show map
	int	i;
	int	k;

	i = 0;
	while (i < 6)
	{
		k = 0;
		while (k < 6)
		{
			if (map_v.map[i][k] != '0')
				write(1, &map_v.map[i][k], 1);
			else
				write(1, " ", 1);
			write(1, " ", 1);
			k++;
		}
		write(1, "\n", 1);
		i++;
	}
}
