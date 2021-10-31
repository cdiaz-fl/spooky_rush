/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_lib.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:39:44 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/31 14:29:00 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPOOOOKY_LIB_H
# define SPOOOOKY_LIB_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include "../ft_printf/includes/ft_printf.h"

typedef struct s_options
{
	char	*col1;
	char	*col2;
	char	*col3;
	char	*col4;
}	t_options;

typedef struct s_index
{
	int		i1_1;
	int		i1_2;
	int		i1_3;
	int		i1_4;
	int		i2_1;
	int		i2_2;
	int		i2_3;
	int		i2_4;
	int		i3_1;
	int		i3_2;
	int		i3_3;
	int		i3_4;
	int		i4_1;
	int		i4_2;
	int		i4_3;
	int		i4_4;
}	t_index;

typedef struct s_map
{
	int			max_move;
	char		*col_up;
	char		*col_down;
	char		*col_left;
	char		*col_right;
	char		**map;
	char		**split;
	t_options	*options;
	t_index		index;
}	t_map;

int			ft_do_malloc_col(t_map *map);
int			ft_do_malloc_map(t_map *map);
int			ft_hand_errors(t_map *map_v);
void		ft_basic_logic(t_map *map_v);
t_map		ft_init(t_map map_v);
t_map		ft_init_map(t_map map_v);
t_map		*ft_init_index(t_map *map_v);
int			ft_force_logic(t_map *map_v);
void		ft_options_logic(t_map *map_v);
//t_map		*check_options_col1(t_map *map_v, int i);
//t_map		*check_options_col2(t_map *map_v, int i);
//t_map		*check_options_col3(t_map *map_v, int i);
//t_map		*check_options_col4(t_map *map_v, int i);
int			ft_check_rows_left(t_map	*map_v);
int			ft_check_rows_right(t_map *map_v);
int			ft_check_cols_up(t_map *map_v);
int			ft_check_cols_down(t_map *map_v);
void		ft_put_map(t_map	map_v);

#endif
