/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_lib.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:39:44 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/29 16:17:06 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPOOOOKY_LIB_H
# define SPOOOOKY_LIB_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include "../ft_printf/includes/ft_printf.h"

typedef struct s_map
{
	char	*col_up;
	char	*col_down;
	char	*col_left;
	char	*col_right;
	char	**map;
	char	**split;
}	t_map;

typedef struct s_options
{
	char	*col1;
	char	*col2;
	char	*col3;
	char	*col4;
}	t_options;

int	ft_do_malloc_col(t_map *map);
int	ft_do_malloc_map(t_map *map);

#endif
