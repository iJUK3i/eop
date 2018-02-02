/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 00:37:01 by issmith           #+#    #+#             */
/*   Updated: 2018/02/01 01:54:12 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	space_mgr(char key[3], int flag)
{
	int i;

	i = 0;
	if (flag == 0)
	{
		key[0] = (char)malloc(sizeof(char) + 2);
		key[1] = (char)malloc(sizeof(char) + 2);
		key[2] = (char)malloc(sizeof(char) + 2);
	}
	if (flag == 1)
	{
		free(map);
//		free(key);
		free(temp);
	}
}

/*
**  called by the main
**  this is the main error checking controller
*/

int		error_checks(char *map)
{
	int		lines;

	lines = 0;
	lines = get_lines(map);
	if ((line_error(map, lines) != 1) && (length_error(map) != 1))
		return (0);
	else
		return (1);
}

/*
**  handles the majority of function calls here
*/

void	new_main(int nb_arg, char **input)
{
	char	*map;
	int		flag;
	int		file;

	file = 1;
	flag = 0;
	if (nb_arg > 1)
	{
		while (nb_arg > file)
		{
			map = (char *)malloc(sizeof(size_file(input, file)) + 1);
			map = read_file(map, input, file);
			ft_putstr(map);
			if (map)
			{	
				if (error_checks(map) == 0)
					flag = 1;
			}
			else
				ft_putstr("map error\n");
			if (flag)
				lets_solve(map);
			file++;
		}
	}
	space_mgr(key, 1);
}

int		main(int nb_arg, char **input)
{
	new_main(nb_arg, input);
	return (0);
}
