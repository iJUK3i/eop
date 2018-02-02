/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lets_solve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 18:31:44 by issmith           #+#    #+#             */
/*   Updated: 2018/02/01 11:57:02 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
**  adds up the values for the neighbors
*/

int		check_nbrs(int cache[N][N], int i, int j)
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
	
	if (z == 0 || x == 0 || y == 0)
		return (a);
	else if (z >= y && y >= x)
		return (a += x);
	else if (z >= y && x >= y)
		return (a += y);
	else if (y >= z && x >= z)
		return (a += z);
	else if (z == y && y == x)
		return (x + a);
	else if (x >= z && z >= y)
		return (a + y);
	else
		return (a + a);
}

/*
**  calls the check ft to find the value of the neighbors
*/

void	final_solve(int cache[N][N], int x, int y)
{
	int i;
	int j;
	int flag;

	i = 0;
	flag = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			j++;
			if (j > 0 && i > 0 && cache[i][j] != 0)
			{
				cache[i][j] = check_nbrs(cache, i, j);
			}
		}
		i++;
	}
	

}


/*
**  creates a copy of the board in binary 1's n 0's
*/

void	solve_help(char g_key[3], char *g_map, int i)
{
	int		cache[N][N];
	int		x;
	int		y;

	x = 0;
	y = 0;
	ft_putstr(g_map);
	while (g_map[i] != '\0')
	{
		y = 0;
		while (g_map[i] != '\n')
		{
			cache[x][y] = g_map[i] == g_key[1] ? 1 : 0;
			i++;
			y++;
		}
		x++;
		i++;
	}
	final_solve(cache, x, y);
}

/*
**  originally this ft made the keys but i use malloc for that instead
*/

void	lets_solve(char *g_map)
{
	int		i;
	int		lines;

	lines = get_lines(g_map);
	i = 0;
	while (g_map[i] != '\n')
		i++;
	i++;
	solve_help(g_key, g_map, i);
}
