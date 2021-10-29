/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraybilen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:18:44 by aamorin-          #+#    #+#             */
/*   Updated: 2021/10/29 16:36:15 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arraybilen(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		if (ft_strlen(array[i]) != 1)
			return (0);
		if (!ft_strchr("1234", array[i][0]))
			return (0);
		i++;
	}
	return (i);
}
