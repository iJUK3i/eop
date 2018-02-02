/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 19:42:37 by issmith           #+#    #+#             */
/*   Updated: 2018/01/25 22:40:19 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
** this reads from files
*/

int		ft_read(int count, char **input)
{
	int		ret;
	int		fd;
	int		i;
	char	buf[BUF_SIZE];

	i = 1;
	if (count < 2)
		ft_from();
	while (i < count)
	{
		fd = open(input[i], O_RDWR, S_IRUSR);
		if (ft_error(errno, input[i]) == 0)
		{
			while ((ret = read(fd, buf, BUF_SIZE)))
			{
				buf[ret] = '\0';
				ft_putstr(buf);
			}
			if (close(fd) == -1)
				return (1);
		}
		errno = 0;
		i += 1;
	}
	return (0);
}

/*
** this reads in from the stdoutput
*/

int		ft_from(void)
{
	int		ret;
	char	buf[BUF_SIZE];
	char	temp;

	read(0, &temp, 1);
	if (temp == 0)
		while (1)
		{
			ret = read(0, buf, BUF_SIZE);
			buf[ret] = '\0';
			ft_putstr(buf);
		}
	else
	{
		ft_putchar(temp);
		while ((ret = read(0, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
	}
	return (0);
}

/*
** teh main lol
*/

int		main(int count, char **input)
{
	ft_read(count, input);
	return (0);
}
