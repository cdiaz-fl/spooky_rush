/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:26:43 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/20 18:20:47 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*get_number(char *flag, char *full_flags)
{
	char	*str;
	size_t	len;
	size_t	i;
	char	*join;

	i = 0;
	len = 0;
	if (full_flags)
		len = ft_strlen(full_flags);
	while (flag[len] >= '0' && flag[len] <= '9')
		len++;
	str = malloc(len + 1);
	len = 0;
	if (full_flags)
		len = ft_strlen(full_flags);
	while (flag[len] >= '0' && flag[len] <= '9')
	{
		str[i] = flag[len];
		len++;
		i++;
	}
	str[i] = '\0';
	join = ft_strjoin(full_flags, str);
	free(str);
	return (join);
}
