/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_creat_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 05:00:09 by issmith           #+#    #+#             */
/*   Updated: 2018/01/26 05:01:53 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*new;

	new = malloc(sizeof(t_btree));
	if (new)
	{
		new->item = item;
		new->left = 0;
		new->right = 0;
	}
	return (new);
}
