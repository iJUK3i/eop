/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:13:00 by issmith           #+#    #+#             */
/*   Updated: 2018/01/13 16:21:20 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int nb, int power)
{
	int	ans;

	ans = 1;
	while (power)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}

int		ft_sqrt(int nb)
{
	double n;
	double x;

	n = nb / 2.0;
	x = 0.0;
	while (n != x)
	{
		x = n;
		n = (n + nb / n) / 2.0;
	}
	return (n);
}
