/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 10:30:19 by issmith           #+#    #+#             */
/*   Updated: 2018/01/15 06:12:06 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_the_door(int *i, int *door_width, int dark_matter, int door_size)
{
	int mouse;

	mouse = door_size / 2;
	if ((door_size > 3) && (dark_matter == mouse) &&
			(*door_width == (door_size / 2) - 1))
		ft_putchar('$');
	else
		ft_putchar('|');
	*i += 1;
	*door_width += 1;
}

int		print_screen(int line_nbr, int dark_matter, int door_size)
{
	int i;
	int door_width;

	door_width = -(door_size / 2);
	i = 0;
	while (i < dark_matter)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	i = 0;
	while (i <= line_nbr * 2)
	{
		while ((i == line_nbr + door_width) && (dark_matter < door_size) &&
				(door_width <= door_size / 2))
			print_the_door(&i, &door_width, dark_matter, door_size);
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return (dark_matter - 1);
}

void	temple(int dark_matter, int offset, int gravity, int door_size)
{
	int i;
	int j;
	int jump;

	i = 0;
	j = 1;
	jump = 4;
	while (dark_matter + 1)
	{
		if (i == gravity)
		{
			i += offset;
			dark_matter -= offset;
			gravity = i + jump;
			jump++;
			if (j == 2)
			{
				offset++;
				j = 0;
			}
			j++;
		}
		dark_matter = print_screen(i, dark_matter, door_size);
		i++;
	}
}

void	sastantua(int size)
{
	int dark_matter;
	int i;
	int j;

	i = 1;
	j = 0;
	dark_matter = 0;
	if (size > 0)
	{
		while (i <= size)
		{
			dark_matter += 6 + j;
			if (i > 1)
				j++;
			if ((i > 1) && (i % 2))
				j++;
			i++;
		}
		if (!(size % 2))
		{
			ft_putchar('X');
			size--;
		}
		temple(dark_matter - 4, 2, 3, size);
	}
}

int		main()
{
	sastantua(8);
	return (0);
}
