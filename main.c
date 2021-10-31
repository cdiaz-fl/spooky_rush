/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:27:44 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 21:09:28 by aamorin-         ###   ########.fr       */
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
		ft_freetab(map_v.split);
		return (ft_putstr("Algún zombi se ha despistado\n"));
	}
	if (!(ft_do_malloc_col(&map_v)) || !(ft_do_malloc_map(&map_v)))
		return (ft_putstr("Algún zombi se ha despistado\n"));
	if (ft_hand_errors(&map_v))
		return (ft_putstr("Los humanos han ganado\n") && ft_free_all(&map_v, 1));
	map_v = ft_init_map(map_v);
	ft_init_optional_split(&map_v);
	if (ft_force_logic(&map_v, -1, -1, -1))
		return (ft_putstr("Los humanos han ganado\n") && ft_free_all(&map_v, 2));
	ft_putstr("Los humanos han perdido\n");
	ft_put_map(&map_v);
	ft_free_all(&map_v, 2);
	return (0);
}
