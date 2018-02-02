/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 23:00:32 by issmith           #+#    #+#             */
/*   Updated: 2018/01/24 23:41:34 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	int			i;

	list = NULL;
	i = 1;
	list = ft_create_elem(av[i]);
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = list;
		i++;
	}
	return (list);
}
