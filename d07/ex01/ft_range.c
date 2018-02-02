/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 22:56:36 by issmith           #+#    #+#             */
/*   Updated: 2018/01/18 23:00:57 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int diff;

	if (min >= max)
		return (NULL);
	diff = max - min;
	tab = (int *)malloc(sizeof(*tab) * (diff));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i += 1;
		min += 1;
	}
	return (tab);
}
