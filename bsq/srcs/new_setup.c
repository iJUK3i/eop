/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_setup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 01:49:15 by issmith           #+#    #+#             */
/*   Updated: 2018/02/01 07:54:16 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
**  called by the error_check ft
**  this function just makes sure the actual lines match the g_map key
*/

int		get_lines(char *g_map)
{
	int		a;
	char	*g_temp;
	int		j;

	j = 0;
	a = 0;
	g_temp = (char *)malloc(sizeof(char) * (1000) + 1);
	while (g_map[a] != '\n')
	{
		a++;
		if (g_map[a] == '\n')
		{
			while (j < a - 3)
			{
				g_temp[j] = g_map[j];
				j++;
			}
		}
	}
	a = ft_atoi(g_temp);
	return (a);
}



/*
**  called by error_check ft
**  check to make sure there are a correct # of lines
*/

int		line_error(char *g_map, int lines)
{
	int a;
	int j;
	int flip;

	a = 0;
	j = 0;
	flip = 1;
	while (g_map[a] != '\0')
	{
		if (g_map[a] == '\n' && flip == 0)
			j++;
		if (flip == 1 && g_map[a] == '\n')
			flip = 0;
		
		a++;
	}
	if (lines - j == 0)
		return (0);
	else
		return (1);
}

/*
**  called by error_check ft
**  checks to make sure all lines are equal length
*/

int		length_error(char *g_map)
{
	int	flip;
	int	a;
	int j;
	int max;
	int test;

	test = 0;
	j = 0;
	a = 0;
	flip = 1;
	max = 0;
	while (g_map[a] != '\0')
	{

		while (flip == 0 && g_map[a] != '\n')
		{
			j++;
			a++;
			if (g_map[a] == '\n')
				max = j;
			if (g_map[a] == '\n' && max != 0 && max != j)
			{
				ft_putnbr(j);
				ft_putchar(' ');
				ft_putnbr(max);
				ft_putchar('\n');
				test = max;
				if (j != max)
					return (1);
			}
			if (g_map[a] == '\n')
				j = 0;
		}
		if (flip == 1 && g_map[a] == '\n')
		{
			j = 0;
			flip = 0;
		}
		a++;
	}
	return (0);
}
