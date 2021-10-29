/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spooooky_lib.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:39:44 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/29 11:48:12 by aamorin-         ###   ########.fr       */
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
	char	**col_up;
	char	**col_down;
	char	**col_left;
	char	**col_right;
	char	**map;
} t_map;


#endif
