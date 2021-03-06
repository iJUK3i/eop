/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lets_solve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 18:31:44 by issmith           #+#    #+#             */
/*   Updated: 2018/02/01 01:45:08 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		check_nbrs(char cache[N][N], int i, int j)
{
	int a;
	int x;
	int y;
	int	z;
	
	a = cache[i][j];
	x = 0;
	y = 0;
	z = 0;
	x = cache[i][j - 1];
	y = cache[i - 1][j - 1];
	z = cache[i - 1][j];
	if (z >= y && x >= y)
		return (y + a);
	if (z >= y && y >= x)
		return (x + a);
	if (y >= x && x >= z)
		return (z + a);
	if (y >= z && z >= x)
		return (x + a);
	if (x >= z && z >= y)
		return (y + a);
	if (x >= y && y >= z)
		return (z + a);
	return (y);
}


void	final_solve(char cache[N][N], char key[3], int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < x)
	{
		while (j < y)
		{
			ft_putchar(cache[i][j]);
			if ((i > 1 && j > 1) && (i < x - 1 && j < y - 1))
			{
				 if (cache[i][j] == key[1])
				 {
					 cache[i][j] = check_nbrs(cache, i, j);
				 }
			}
			j++;
		}
		i++;
	}
}
					


void	solve_help(char key[3], char *map, int i)
{
	char	cache[N][N];
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (map[i] != '\0')
	{
		cache[x][y] = map[i] == key[1] ? 1 : 0;
		i++;
		if (map[i] == '\n' && map[i + 1] != '\0')
		{
			x++;
			i++;
			y = 0;
		}
	}
	final_solve(cache, key, x, y);
}

void	lets_solve(char *map)
{
	int		i;
	int		lines;

	lines = get_lines(map);
	i = 0;
/*	while (map[i] != '\n')
	{
		i++;
		if (map[i] == '\n')
		{
			key[2] = map[i - 1];
			key[0] = map[i - 2];
			key[1] = map[i - 3];
		}
	}
*/	ft_putchar(key[2]);
	ft_putchar(key[0]);
	ft_putchar(key[1]);
	solve_help(key, map, i);
}
