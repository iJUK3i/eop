/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 23:09:50 by issmith           #+#    #+#             */
/*   Updated: 2018/01/25 23:21:33 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_show_file(char *path, int nb, char *str)
{
	int		fd;
	int		i;
	int		nb_2;
	int		ret;
	char	buf[2];

	i = 0;
	fd = open(path, O_RDWR);
	if (fd != -1 && (errno == 0 || errno == 9))
	{
		nb_2 = ft_skip_to(nb, ft_char_count(fd), str[0]);
		close(fd);
		fd = open(path, O_RDONLY, S_IRUSR);
		while (i < nb_2 && (ret = read(fd, buf, 1)))
			i++;
		while ((ret = read(3, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr_n(STD_OUT, buf);
		}
	}
	close(fd);
}

void	ft_putstr_n(int output, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(output, &str[i], 1);
		i++;
	}
}

int		ft_skip_to(int nb, int nb_2, char c)
{
	if (nb < 0 || c == '-')
		return (nb_2 + nb);
	else if (c == '+')
		return (nb);
	else
		return (nb_2 - nb);
}

int		ft_char_count(int fd)
{
	int		nbr;
	int		ret;
	char	buf[2];

	nbr = 0;
	while ((ret = read(fd, buf, 1)))
	{
		buf[ret] = '\0';
		nbr++;
	}
	return (nbr);
}

void	ft_error(char *path)
{
	if (errno == 2)
	{
		ft_putstr_n(OUT_ERROR, "tail: ");
		ft_putstr_n(OUT_ERROR, path);
		ft_putstr_n(OUT_ERROR, ": No such file or directory\n");
	}
	if (errno == 20)
	{
		ft_putstr_n(OUT_ERROR, "tail: ");
		ft_putstr_n(OUT_ERROR, path);
		ft_putstr_n(OUT_ERROR, ": Not a directory\n");
	}
}
