/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:36:10 by aamorin-          #+#    #+#             */
/*   Updated: 2021/07/21 10:24:30 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(const char *nargs, ...)
{
	va_list	ap;
	t_flags	flags_list;
	int		count;
	char	*flag;

	count = 0;
	va_start (ap, nargs);
	while (*nargs)
	{
		if (*nargs == '%' && *++nargs != '%')
		{
			flag = get((char *)nargs, NULL);
			flags_list = get_flags_list(flag);
			nargs = nargs + ft_strlen(flag);
			count += write_parameters(flags_list, ap);
			free(flag);
		}
		else
		{
			count += putchr_c(*nargs, 1);
			nargs++;
		}
	}
	va_end (ap);
	return (count);
}
