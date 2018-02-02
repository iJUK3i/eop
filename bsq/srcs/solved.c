/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solved.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 02:01:15 by issmith           #+#    #+#             */
/*   Updated: 2018/02/01 21:00:35 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	big_solve(char cache[N][N], int x, int y)
{
	int i;
	int j;
	int max;
	int flag;
	int a;
	int b;

	i = 0;
	flag = 1;
	max = 0;
	a = 0;
	b = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (cache[i][j] == 0)
			{
				cache[i][j] = g_key[0];
			}
			else if (cache[i][j] >= max)
			{
				max = cache[i][j];
			}
// need to fix this here //
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}


void	eye_see(char cache[N][N], int x, int y)
{
	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			ft_putnbr(cache[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

