/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:34:07 by issmith           #+#    #+#             */
/*   Updated: 2018/01/13 16:35:51 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;
	int x;
	int flag;

	x = nb;
	flag = 0;
	i = 2;
	while (i <= x / 2)
	{
		i++;
		if (x % i == 0)
		{
			flag = 1;
			return (ft_find_next_prime(++x));
		}
	}
	return (x);
}
