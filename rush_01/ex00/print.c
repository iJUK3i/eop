/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 23:25:14 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/21 23:03:30 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
**This function prits the sudoku. It is called from the main().
*/

void	print_sudoku(int puzzle[][9])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (j == 8)
			{
				ft_putchar(puzzle[i][j] + '0');
				ft_putchar('\n');
			}
			else
			{
				ft_putchar(puzzle[i][j] + '0');
				ft_putchar(' ');
			}
			j++;
		}
		j = 0;
		i++;
	}
}
