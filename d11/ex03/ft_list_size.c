/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 22:44:28 by issmith           #+#    #+#             */
/*   Updated: 2018/01/24 22:45:45 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int	len;

	if (!begin_list)
		return (0);
	len = 1;
	while (begin_list->next)
	{
		len += 1;
		begin_list = begin_list->next;
	}
	return (len);
}
