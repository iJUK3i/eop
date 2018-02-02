/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 07:56:06 by issmith           #+#    #+#             */
/*   Updated: 2018/01/11 08:48:16 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_screen(int *tab, int size)
{
	int i;
	int is_low;

	i = 1;
	is_low = 1;
	while (i < size)
	{
		if (tab[i - 1] >= tab[i])
			is_low = 0;
		i++;
	}
	if (is_low)
	{
		i = 0;
		while (i < size)
			ft_putchar(tab[i++] + '0');
		if (tab[0] < (10 - size))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_is_one(int i)
{
	while (i < 10)
	{
		ft_putchar(i + '0');
		if (i != 9)
			ft_putchar(',');
		if (i != 9)
			ft_putchar(' ');
		i++;
	}
}

void	ft_print_combn(int n)
{
	int i;
	int tab[n];

	i = 0;
	if (n == 1)
		ft_is_one(i);
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n > 1)
	{
		ft_print_screen(tab, n);
		tab[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}
