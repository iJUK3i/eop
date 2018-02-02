/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 07:06:04 by issmith           #+#    #+#             */
/*   Updated: 2018/01/23 10:37:15 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_do_op(int a, int b, char **input)
{
	if (input[2][0] == '+')
		return (a + b);
	if (input[2][0] == '-')
		return (a - b);
	if (input[2][0] == '/')
		return (a / b);
	if (input[2][0] == '%')
		return (a % b);
	if (input[2][0] == '*')
		return (a * b);
	else
		return (0);
}

int		error_check(int y, char **input)
{
	if (y == 0 && input[2][0] == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	else if (y == 0 && input[2][0] == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **input)
{
	int x;
	int y;
	int ans;

	if (argc != 4)
		return (0);
	x = ft_atoi(input[1]);
	y = ft_atoi(input[3]);
	if (argc == 4)
	{
		if (error_check(y, input) == 0)
		{
			ans = ft_do_op(x, y, input);
			if (ans > 2147483647 || ans < -2147483648)
				return (0);
			ft_putnbr(ans);
			ft_putchar('\n');
		}
	}
	return (0);
}
