/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 20:36:48 by issmith           #+#    #+#             */
/*   Updated: 2018/01/30 10:33:14 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#define N 2750100
void	check_the(char *map, char cache[3][N])
{
	int i;
	int a;
	int b;
	int x;

	a = 0;
	b = 0;
	i = 0;
	x = 0;
	if (cache[3] != 0)
		;
	if (map)
		;
	ft_putchar('\n');
/*	while (map[i] != '\0')
	{
		while (map[i] != '\n')
		{
			if (map[i] == '\n')
			{

			}
		}
	}
*/	

/*
** this takes in the arguments and stores them in an array
** starting with cache is the array all the potential maps will be stored
** increase 'a' value to see next map or how many maps there are
*/

int		check_basics(int nb_arg, char **input, char key[3], char *map)
{
	int		fd;
	char	buf[1];
	int		i;
	
	i = 1;
	while (nb_arg > i)
	{
		key_gen(input, key, map, lines);
/*		fd = open(input[i], O_RDONLY, S_IRUSR);
		while ((0 != read(fd, buf, 1)))
		{
			map[x] = buf[0];
			ft_putchar(buf[0]);
			if ((buf[0] == '\n') && (x > 3 && x <= 7))
			{
				key[2] = map[x - 1];
				key[0] = map[x - 2];
				key[1] = map[x - 3];
				while (lines < x - 3)
					lines++;
				lines = ft_atoi(map);
				a = 1;
			}
			x++;
			if (a == 1 && buf[0] != key[1] && buf[0] != '\n' && buf[0] != key[0])
				return (1);
		}
*/		
		i++;
	}
	return(0);
}

int		key_gen(char **input, char key[3], char *map, int lines)
{
	int fd;
	int a;
	int x;

	a = 0;
	x = 0;
	fd = open(input[1], O_RDONLY, S_IRUSR);
	while ((0 != read(fd, buf, 1)))
	{
		map[x] = buf[0];
		ft_putchar(buf[0]);
/*		if ((buf[0] == '\n') && (x > 3 && x <= 7))
		{
			key[2] = map[x - 1];
			key[0] = map[x - 2];
			key[1] = map[x - 3];
			while (lines < x - 3)
				lines++;
			lines = ft_atoi(map);
			a = 1;
		}
*/		a = key_help(key, map, x);
		x++;
		if (a == 1 && buf[0] != key[1] && buf[0] != '\n' && buf[0] != key[0])
			return (1);
	}
	return (0)
}
	
int		main(int nb_arg, char **input)
{
	char	*map;
	char	key[3];
	char	cache[3][N];
	int		i;
	int		x;

	x = 0;
	i = 1;
	map = (char *)malloc(sizeof(char) * (may_eye(input, x, i) + 1));
	if (nb_arg > i)
	{
		check_basics(nb_arg, input, key, map);
		i++;
	}

	return(0);
	// else (read from std out)
	exit(0);
}
