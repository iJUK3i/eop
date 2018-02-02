/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 00:37:01 by issmith           #+#    #+#             */
/*   Updated: 2018/02/01 11:22:34 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	space_mgr(char g_key[3], int flag)
{
	int i;

	i = 0;
	if (flag == 0)
	{
		g_key[0] = (char)malloc(sizeof(char) + 2);
		g_key[1] = (char)malloc(sizeof(char) + 2);
		g_key[2] = (char)malloc(sizeof(char) + 2);
	}
	if (flag == 1)
	{
		free(g_map);
//		free(g_key);
		free(g_temp);
	}
}

/*
**  called by the main
**  this is the main error checking controller
*/

int		error_checks(char *g_map)
{
	int		lines;

	lines = 0;
	lines = get_lines(g_map);
	if ((line_error(g_map, lines) != 1) && (length_error(g_map) != 1))
		return (0);
	else
		return (1);
}

/*
**  handles the majority of function calls here
*/

void	new_main(int nb_arg, char **input)
{
	int		flag;
	int		file;

	file = 1;
	flag = 0;
	if (nb_arg > 1)
	{
		while (nb_arg > file)
		{
			g_map = (char *)malloc(sizeof(size_file(input, file)) + 1);
			g_map = read_file(g_map, input, file);
			if (g_map)
			{	
				if (error_checks(g_map) == 0)
					flag = 1;
				else
					ft_putstr("map error\n");
			}
			else
				ft_putstr("map error\n");
			if (flag)
				lets_solve(g_map);
//			space_mgr(g_key, 1);
			file++;
		}
	}
	space_mgr(g_key, 1);
}

int		main(int nb_arg, char **input)
{
	new_main(nb_arg, input);
	exit(0);
	return (0);
}
