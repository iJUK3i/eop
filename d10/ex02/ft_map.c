/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 22:21:10 by issmith           #+#    #+#             */
/*   Updated: 2018/01/23 06:33:28 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *k;

	if ((k = (int *)malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		k[i] = f(tab[i]);
		i += 1;
	}
	return (k);
}
