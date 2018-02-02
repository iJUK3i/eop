/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 01:18:23 by issmith           #+#    #+#             */
/*   Updated: 2018/01/23 06:43:40 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (tab[i] != 0)
	{
		x = f(tab[i]) == 1 ? x + 1 : x;
		i += 1;
	}
	return (x);
}