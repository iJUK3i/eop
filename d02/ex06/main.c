/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 00:19:00 by issmith           #+#    #+#             */
/*   Updated: 2018/01/12 00:25:41 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	ft_putnbr(42);
	ft_putchar('\n');
//	ft_putnbr('42');
	ft_putchar('\n');
//	ft_putnbr("42");
	ft_putchar('\n');
	return (0);
}
