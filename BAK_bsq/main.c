/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 20:36:48 by issmith           #+#    #+#             */
/*   Updated: 2018/01/31 19:03:58 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
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
			if (map)
			{	
				if (error_checks(map) == 0)
					flag++;
			}
			else
				ft_putstr("map error\n");
			if (flag)
				lets_solve(map);
			free(map);
			file++;
		}
	}
}

int		main(int nb_arg, char **input)
{
	new_main(nb_arg, input);
	return (0);
}
