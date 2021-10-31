/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_lib.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:39:44 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 20:51:18 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPOOOOKY_LIB_H
# define SPOOOOKY_LIB_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include "../ft_printf/includes/ft_printf.h"

typedef struct s_map
{
	char		*col_up;
	char		*col_down;
	char		*col_left;
	char		*col_right;
	char		**map;
	char		**split;
	char		**opt;
}	t_map;

int			ft_do_malloc_col(t_map *map);
int			ft_do_malloc_map(t_map *map);
int			ft_hand_errors(t_map *map_v);
void		ft_basic_logic(t_map *map_v);
t_map		ft_init(t_map map_v);
t_map		ft_init_map(t_map map_v);
t_map		*ft_init_index(t_map *map_v);
t_map		*ft_init_optional_split(t_map	*map_v);
int			ft_force_logic(t_map *map_v, int j, int k, int l);
void		ft_options_logic(t_map *map_v);
int			ft_check_rows_left(t_map	*map_v);
int			ft_check_rows_right(t_map *map_v);
int			ft_check_cols_up(t_map *map_v);
int			ft_check_cols_down(t_map *map_v);
void		ft_put_map(t_map	*map_v);
int			ft_check_duplicity(t_map *map_v);
int			ft_free_all(t_map *map_v, int i);

#endif
