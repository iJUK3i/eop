/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 11:59:24 by issmith           #+#    #+#             */
/*   Updated: 2018/01/28 17:57:50 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_malloc(int i, char *str)
{
	char	*n_str;
	int		j;

	n_str = (char *)malloc(sizeof(i + 10000));
	j = 0;
	while (j <= i)
	{
		n_str[j] = str[j];
		j++;
	}
	free(str);
	return (n_str);
}

int		len_y(char *str)
{
	int y;

	y = 0;
	while (*str)
	{
		if (*str == '\n')
			y++;
		str++;
	}
	return (y);
}

int		len_x(char *str)
{
	int x;

	x = 0;
	while ((str[x] != '\n') && (str[x]))
		x++;
	return (x);
}

int		main(void)
{
	int		ret;
	char	buf[1];
	char	*str;
	int		i;
	int		xy[2];

	str = (char *)malloc(sizeof(10000));
	i = 0;
	while ((ret = read(0, buf, 1)))
	{
		if ((i + 1) % 10000 == 0)
			str = ft_malloc(i, str);
		str[i] = buf[0];
		i++;
	}
	str[i + 1] = '\0';
	xy[0] = len_x(str);
	xy[1] = len_y(str);
	if (check_valid(xy[0], xy[1]))
		return (0);
	check_rush(str, xy[0], xy[1]);
	return (0);
}
