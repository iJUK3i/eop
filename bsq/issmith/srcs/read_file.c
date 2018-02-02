/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 16:46:30 by issmith           #+#    #+#             */
/*   Updated: 2018/01/31 23:40:19 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		size_fize(char **input, int file)
{
	int		fd;
	int		len;
	char	buf[1];

	len = 0;
	fd = open(input[file], O_RDONLY, S_IRUSR);
	while (read(fd, buf, 1) != 0)
		len++;
	return (len);
}

char	*read_file(char *str, char **input, int file)
{
	int		fd;
	char	buf[1];
	int		i;

	i = 0;
	fd = open(input[file], O_RDONLY, S_IRUSR);
	while (read(fd, buf, 1) != 0)
	{
		if ((key[2] || key[1] || key[0]) && buf[0] != key[1] && buf[0] != '\n'
				&& buf[0] != key[0])
			return (NULL);
		str[i] = buf[0];
		if ((i >= 4 && i <= 7) && (buf[0] == '\n'))
		{
			key[2] = str[i - 1];
			key[0] = str[i - 2];
			key[1] = str[i - 3];
		}
		i++;
	}
	close(fd);
	return (str);
}
