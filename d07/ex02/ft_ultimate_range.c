/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 23:04:32 by issmith           #+#    #+#             */
/*   Updated: 2018/01/18 23:33:46 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int diff;
	int *ptr;

	if (min >= max)
		return (0);
	i = 0;
	diff = max - min;
	ptr = (int *)malloc(sizeof(int) * diff);
	while (min < max)
	{
		ptr[i] = min;
		min += 1;
		i += 1;
	}
	*range = ptr;
	return (diff);
}
