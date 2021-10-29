/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:17:50 by aamorin-          #+#    #+#             */
/*   Updated: 2021/06/02 07:56:23 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*array;
	size_t	total_size;

	total_size = nitems * size;
	array = malloc(total_size);
	if (array)
		ft_bzero(array, total_size);
	return (array);
}
