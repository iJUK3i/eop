/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 16:37:29 by issmith           #+#    #+#             */
/*   Updated: 2018/01/25 19:26:45 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int count, char **input)
{
	int		i;
	int		fd;
	int		buf[1];
	char	str[8380000];

	fd = open(input[1], O_RDONLY);
	if (fd < 0 && count == 2)
		return (write(2, "File not found!\n", 16));
	i = 0;
	if (count == 2)
	{
		if (fd)
		{
			while (read(fd, buf, 1) != 0)
				str[i++] = buf[0];
			ft_putstr(str);
			if (close(fd) < 0)
				return (write(2, "File Descriptor Close Error\n", 28));
		}
	}
	else if (count > 2)
		return (write(2, "Too many arguments.\n", 20));
	else
		return (write(2, "File name missing.\n", 19));
}
