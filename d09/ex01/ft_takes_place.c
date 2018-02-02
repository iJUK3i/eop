/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 02:14:22 by issmith           #+#    #+#             */
/*   Updated: 2018/01/19 11:54:52 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}

void	ft_check_pm(int hour)
{
	if (hour == 23)
	{
		ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
		ft_putstr("11.00 P.M. AND ");
		ft_putstr("12.00 A.M.\n");
	}
	else if (hour == 24)
	{
		ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
		ft_putnbr(12);
		ft_putstr(".00 A.M. AND ");
		ft_putstr("1.00 A.M.\n");
	}
	else if (hour > 12 && hour < 23)
	{
		ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
		ft_putnbr((hour - 12));
		ft_putstr(".00 P.M. AND ");
		ft_putnbr(hour - 11);
		ft_putstr(".00 P.M.\n");
	}
}

void	ft_check_am(int hour)
{
	if (hour == 0)
	{
		ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
		ft_putstr("12.00 A.M. AND ");
		ft_putstr("1.00 A.M.\n");
	}
	else if (hour > 0 && hour < 11)
	{
		ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
		ft_putnbr(hour);
		ft_putstr(".00 A.M. AND ");
		ft_putnbr((hour + 1));
		ft_putstr(".00 A.M.\n");
	}
	else if (hour == 11)
	{
		ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
		ft_putstr("11.00 A.M. AND ");
		ft_putstr("12.00 P.M.\n");
	}
}

void	ft_takes_place(int hour)
{
	if (hour == 12)
	{
		ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
		ft_putstr("12.00 P.M. AND ");
		ft_putstr("1.00 P.M.\n");
	}
	ft_check_pm(hour);
	ft_check_am(hour);
}
