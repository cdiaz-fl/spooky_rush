/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tomate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:56:00 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2021/10/31 17:05:24 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>
int			ft_check_rows_left(char map[6][7]);
int			ft_check_rows_right(char map[6][7]);
int			ft_check_cols_up(char map[6][7]);
int			ft_check_cols_down(char map[6][7]);

int	ft_check_rows_left(char map[6][7])
{
	int		i;
	int		k;
	int		count;
	char	last;

	i = 0;
	while (++i < 5)
	{
		k = 0;
		count = 0;
		last = 0;
		while (++k < 5)
		{
			if (map[i][k] > last)
			{
				last = map[i][k];
				count++;
			}
		}
		if (count != map[i][0] - '0')
		{
			return (0);
		}
	}
	if (!ft_check_rows_right(map))
		return (0);
	return (1);
}

int	ft_check_rows_right(char map[6][7])
{
	int		i;
	int		k;
	int		count;
	char	last;

	i = 0;
	while (++i < 5)
	{
		k = 5;
		count = 0;
		last = 0;
		while (--k > 0)
		{
			if (map[i][k] > last)
			{
				last = map[i][k];
				count++;
			}
		}
		if (count != map[i][5] - '0')
		{
			printf("llega left, count = %d, map[i][0] = %c\n", count, map[i][0]);
			return (0);
		}
	}
	if (!ft_check_cols_up(map))
		return (0);
	return (1);
}

int	ft_check_cols_up(char map[6][7])
{
	int		i;
	int		k;
	int		count;
	char	last;

	k = 0;
	while (++k < 5)
	{
		i = 0;
		count = 0;
		last = 0;
		while (++i < 5)
		{
			if (map[i][k] > last)
			{
				last = map[i][k];
				count++;
			}
		}
		if (count != map[0][k] - '0')
			return (0);
	}
	if (!ft_check_cols_down(map))
		return (0);
	return (1);
}

int	ft_check_cols_down(char map[6][7])
{
	int		i;
	int		k;
	int		count;
	char	last;

	k = 0;
	while (++k < 5)
	{
		i = 5;
		count = 0;
		last = 0;
		while (--i > 0)
		{
			if (map[i][k] > last)
			{
				last = map[i][k];
				count++;
			}
		}
		if (count != map[5][k] - '0')
			return (0);
	}
	return (1);
}

int main()
{
	char	map[6][7] = {"043210\0", "412341\0", "323412\0", "234122\0", "141232\0", "012220\0"};

	if (ft_check_rows_left(map))
	{
			int i;
		i = 0;
		while (i < 6)
		{
			printf("%s\n", map[i]);
			i++;
		}
	}
	else
		printf("tomasturba\n");
	return (0);
}
