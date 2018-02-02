/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 19:27:03 by issmith           #+#    #+#             */
/*   Updated: 2018/01/13 19:32:24 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rush(int width, int height, int x, int y)
{
	if (height == 0 && width == 0)
		ft_putchar('/');
	else if ((height == 0 && width == x - 1) || (height == y - 1 && width == 0))
		ft_putchar('\\');
	else if (height == y - 1 && width == x - 1)
		ft_putchar('/');
	else if (((height == 0) || (height == y - 1)) || ((width == 0) ||
				(width == x - 1)))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int width;
	int height;

	width = 0;
	height = 0;
	if (x > 0 && y > 0)
	{
		while (height < y)
		{
			while (width < x)
			{
				ft_rush(width, height, x, y);
				width++;
			}
			ft_putchar('\n');
			width = 0;
			height++;
		}
	}
}
