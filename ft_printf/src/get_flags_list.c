/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:30:59 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/21 09:00:29 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_flags	initialize_list(void)
{
	t_flags	flags;

	flags.dot_w = -1;
	flags.dot_f = -1;
	flags.num = -1;
	flags.space = 0;
	flags.minus = -1;
	flags.zero = -1;
	flags.plus = 0;
	flags.sharp = 0;
	flags.nega = 0;
	return (flags);
}

char	get_type(char type)
{
	if (type == 'd')
		return ('d');
	if (type == 'i')
		return ('i');
	if (type == 's')
		return ('s');
	if (type == 'c')
		return ('c');
	if (type == 'p')
		return ('p');
	if (type == 'u')
		return ('u');
	if (type == 'x')
		return ('x');
	if (type == 'X')
		return ('X');
	return (0);
}

int	flag_num(char *flag)
{
	size_t		i;
	size_t		j;
	size_t		n;
	char		*number;

	i = 0;
	j = 0;
	while (flag[i] >= '0' && flag[i] <= '9')
		i++;
	if (i == 0)
		return (0);
	number = malloc(i + 1);
	while (flag[j] >= '0' && flag[j] <= '9')
	{
		number[j] = flag[j];
		j++;
	}
	number[j] = '\0';
	n = ft_atoi(number);
	free(number);
	return (n);
}

t_flags	get_flags_list(char *flags)
{
	t_flags	l_flags;

	l_flags = initialize_list();
	if (*flags == ' ')
		l_flags.space = 1;
	if (*flags == '+')
		l_flags.plus = 1;
	if (*flags > '0' && *flags <= '9')
		l_flags.num = flag_num(flags + l_flags.plus + l_flags.space);
	if (*flags == '0')
		l_flags.zero = flag_num(flags + 1);
	if (*flags == '-')
		l_flags.minus = flag_num(flags + 1);
	if (*flags == '.')
		l_flags.dot_f = flag_num(flags + 1);
	if (*flags == '#')
		l_flags.sharp = 1;
	while (*flags)
	{
		flags++;
		if (*flags == '.')
			l_flags.dot_w = flag_num(flags + 1);
	}
	l_flags.type = get_type(*--flags);
	return (l_flags);
}
