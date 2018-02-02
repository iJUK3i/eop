/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 19:42:37 by issmith           #+#    #+#             */
/*   Updated: 2018/01/25 23:40:18 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
** teh main lol
*/

int		main(int count, char **input)
{
	int i;
	int fd;

	if (count >= 4)
	{
		i = 3;
		while (input[i])
		{
			fd = open(input[i], O_RDONLY, S_IRUSR);
			ft_error(input[i]);
			close(fd);
			if (i > 3 && (errno == 0))
				ft_putstr_n(STD_OUT, "\n");
			if (count > 4 && (errno == 0))
			{
				ft_putstr_n(STD_OUT, "==> ");
				ft_putstr_n(STD_OUT, input[i]);
				ft_putstr_n(STD_OUT, " <==\n");
			}
			ft_show_file(input[i], ft_atoi(input[2]), input[2]);
			i++;
			errno = 0;
		}
	}
	return (0);
}
