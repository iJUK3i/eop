/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 20:36:48 by issmith           #+#    #+#             */
/*   Updated: 2018/01/30 01:39:19 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
** this takes in the arguments and stores them in an array
** starting with stash is the array all the potential maps will be stored
** increase 'a' value to see next map or how many maps there are
*/
int		input_map(int count, char **input)
{
	int		map;
	int		fd;
	int		a;
	char	buf[1];
	char	stash[810][10100];
	int		i;
	int		x;

	x = 0;
	i = 1;
	a = 0;
	map = 0;
	//
	fd = open(input[i], O_RDONLY, S_IRUSR);
	while (0 != read(fd, buf, 1))
		x++;

	//
	while (count > i)
	{
		fd = open(input[i], O_RDONLY, S_IRUSR);
		if (fd > 0)
		{
			ft_putstr("reading map: ");
			ft_putnbr(i);
			ft_putchar('\n');
			while ((0 != read(fd, buf, 1)))
			{
				stash[a][map] = (char)malloc(sizeof(input) * 10);
				stash[a][map] = buf[0];
				map++;
			}
			ft_putstr("read complete!\n");
			map = 0;
		}
		i++;
		a++;
	}
	a = 0;
	map = 0;
	while (a < count)
	{
		ft_putstr(stash[a]);
		a++;
	}
	return (0);
}
