/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 00:31:59 by issmith           #+#    #+#             */
/*   Updated: 2018/01/31 01:33:17 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int nb_arg, char **input)
{
	int g;
	
	g = 1;
	if (nb_arg > 1)
	{
		lets_go(input, g);
	}
	else
		//read from std oout
		;
	return (0);
}

void	lets_go(char **input, int g)
{
	char	*str;
	int		fd;
	int		x;
	char	buf[1];

	x = 0;
	fd = open(input[g], O_RDONLY, S_IRUSR);
	while (read(fd, buf, 1) != 0)
		x++;
	str = (char *)malloc(sizeof(x) * 1);
	fd = open(input[g], O_RDONLY, S_IRUSR);
	x = 0;
	while ((0 != read(fd, buf, 1)))
	{
		str[x] = buf[0];
		x++;
	}
	ft_putstr(str);
	ft_putchar('\n');
}
