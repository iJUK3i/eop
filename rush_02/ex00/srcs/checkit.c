/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 12:34:37 by issmith           #+#    #+#             */
/*   Updated: 2018/01/28 12:44:24 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	print_rush(int r_nb, int x, int y, int multi)
{
	if (multi > 0)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(r_nb);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

int		check_valid(int x, int y)
{
	if ((x == 0) || (y == 0))
	{
		ft_putstr("NOT A RUSH!\n");
		return (1);
	}
	return (0);
}

void	check_rush(char *input, int x, int y)
{
	int multi;

	multi = 0;
	if (!ft_strcmp(input, rush00(x, y)))
		print_rush(0, x, y, multi++);
	if (!ft_strcmp(input, rush00(x, y)))
		print_rush(1, x, y, multi++);
	if (!ft_strcmp(input, rush00(x, y)))
		print_rush(2, x, y, multi++);
	if (!ft_strcmp(input, rush00(x, y)))
		print_rush(3, x, y, multi++);
	if (!ft_strcmp(input, rush00(x, y)))
		print_rush(4, x, y, multi++);
	if (multi == 0)
		ft_putstr("NOT A RUSH!\n");
}
