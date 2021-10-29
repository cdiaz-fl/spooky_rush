/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:26:09 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/22 13:32:59 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*get_specifier(char *spe, char *full_flags)
{
	char	*str;
	size_t	len;
	char	*join;

	len = 0;
	if (full_flags)
		len = ft_strlen(full_flags);
	if (spe[len] == 'c' || spe[len] == 's' || spe[len] == 'p'
		|| spe[len] == 'd' || spe[len] == 'i' || spe[len] == 'u'
		|| spe[len] == 'x' || spe[len] == 'X' || spe[len] == '%')
	{
		str = malloc(1 + 1);
		str[0] = spe[len];
		str[1] = '\0';
		join = ft_strjoin(full_flags, str);
		free(str);
		return (join);
	}
	return (full_flags);
}

char	*get_precision(char *precision, char *full_flags)
{
	char	*str;
	size_t	len;
	char	*join;

	if (full_flags)
		len = ft_strlen(full_flags);
	else
		len = 0;
	if (precision[len] == '.')
	{
		str = malloc(1 + 1);
		str[0] = precision[len];
		str[1] = '\0';
		join = malloc(len + ft_strlen(str));
		join = ft_strjoin(full_flags, str);
		free(str);
		return (join);
	}
	str = ft_strdup(full_flags);
	free(full_flags);
	return (str);
}

char	*get_flag(char *flag)
{
	char	*str;
	char	*join;
	char	*number;
	size_t	len;

	len = 0;
	if (flag[len] == ' ' || flag[len] == '+')
		len++;
	str = malloc(len + 1);
	if (len == 1)
		str[0] = flag[0];
	str[len] = '\0';
	if (flag[len] > '0' && flag[len] <= '9')
	{
		number = get_number(flag + len, NULL);
		join = ft_strjoin(str, number);
		free(number);
	}
	else if (flag[len] == '-' || flag[len] == '.'
		|| flag[len] == '#' || flag[len] == '0')
		join = ft_chrjoin(str, flag[len]);
	else
		return (str);
	return (join);
}

char	*get(char *nargs, char *full_flags)
{
	char	*flag;
	int		i;

	i = 0;
	flag = ft_strdup((const char *)nargs);
	full_flags = get_flag(flag);
	if (*full_flags == '-' || *full_flags == '0' || *full_flags == '.'
		|| *full_flags == '+')
		full_flags = get_number(flag, full_flags);
	if (*full_flags != '#')
	{
		if (*full_flags != '.')
		{
			full_flags = get_precision(flag, full_flags);
			if (*full_flags == '\0')
				i = 0;
			else
				i = ft_strlen(full_flags) - 1;
			if (full_flags[i] == '.')
				full_flags = get_number(flag, full_flags);
		}
	}
	full_flags = get_specifier(flag, full_flags);
	free(flag);
	return (full_flags);
}
