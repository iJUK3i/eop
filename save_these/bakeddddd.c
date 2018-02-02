/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lets_solve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 18:31:44 by issmith           #+#    #+#             */
/*   Updated: 2018/01/31 22:36:10 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		skip_line(char *map, int i)
{
	while (map[i] != '\n' && flip > 0)
	{
		i++;
		if (map[i] == '\n' && flip > 0)
		{
			flip = 0;
			i++;
		}
	}
	return (0);
}


void	lets_solve(char *map)
{
	char	cache[N][N];
	int		flip;
	int		i;
	int		x;
	int		y;

	x = 0;
	y = 0;
	i = 0;
	flip = 1;
	ft_putstr(map);
	ft_putchar('\n');
	flip = skip_line(map, i);
	while (map[i] != '\0' && flip == 0)
	{
		cache[x][y] = map[i];
		i++;
		y++;
		if (map[i] == '\n')
		{
			i++;
			x++;
			y = 0;
		}
	}
	i++;
	ft_putstr("done");
}
