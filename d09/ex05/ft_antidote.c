/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 14:49:06 by issmith           #+#    #+#             */
/*   Updated: 2018/01/19 15:34:13 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if (i > j && i > k ? 1 : 0)
	{
		if (j > k)
			return (j);
		else
			return (k);
	}
	else if (k > j && k > i ? 1 : 0)
	{
		if (i > j)
			return (i);
		else
			return (j);
	}
	else if (j > k && j > i ? 1 : 0)
	{
		if (k > i)
			return (k);
		else
			return (i);
	}
	return (0);
}
