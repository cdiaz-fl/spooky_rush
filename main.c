/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:27:44 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/29 18:26:06 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/spooooky_lib.h"

int	main(int a, char **argv)
{
	t_map		map_v;

	if (a != 2)
		return (ft_putstr("Algún zombi se ha despistado\n"));
	map_v.split = ft_split(argv[1], ' ');
	if (ft_arraybilen(map_v.split) != 16)
	{
		free (map_v.split);
		return (ft_putstr("Algún zombi se ha despistado\n"));
	}
	if (!(ft_do_malloc_col(&map_v)) || !(ft_do_malloc_map(&map_v)))
		return (ft_putstr("Algún zombi se ha despistado\n"));
	if (ft_hand_errors(&map_v))
		return (ft_putstr("Los humanos han ganado\n"));
	map_v = ft_init(map_v);
	ft_basic_logic(&map_v);
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
	/*
	i = 0;
	while (i < 4)
	{
		ft_printf("%i = %s\n", i, map_v.options[i].col1);
		ft_printf("%i = %s\n", i, map_v.options[i].col2);
		ft_printf("%i = %s\n", i, map_v.options[i].col3);
		ft_printf("%i = %s\n", i, map_v.options[i].col4);
		i++;
	}
	*/
}
