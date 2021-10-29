/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:51:10 by aamorin-          #+#    #+#             */
/*   Updated: 2021/09/28 18:51:33 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_flags
{
	int		dot_w;
	int		dot_f;
	int		minus;
	int		zero;
	int		plus;
	char	type;
	int		num;
	int		nega;
	int		space;
	int		sharp;
}	t_flags;

int		ft_printf(const char *nargs, ...);
int		write_parameters(t_flags flags_list, va_list ap);
int		w_hex_int(t_flags flags_list, char *front, int i,
			unsigned long long num);
int		w_address(t_flags flags_list, unsigned long long number);
int		w_unsint(t_flags flags_list, unsigned int number);
int		w_int(t_flags flags_list, int number, int count);
int		w_chr(t_flags flags_list, va_list ap);
int		w_string(t_flags flags_list, va_list ap);
char	*get(char *nargs, char *full_flags);
char	*get_number(char *flag, char *full_flags);
t_flags	get_flags_list(char *flags);
char	*get_base(unsigned long long number, int base);
char	*get(char *nargs, char *full_flags);
int		putchr_c(char c, int n);
int		putstr_c(char *str, int n);
int		dot_int(t_flags flags_list, char *num_char, int count, size_t i);

#endif
