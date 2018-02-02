/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:09:13 by issmith           #+#    #+#             */
/*   Updated: 2018/01/26 11:46:13 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)
		(void *, void *))
{
	t_btree		*atm;

	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	atm = *root;
	if (cmpf(item, atm->item) > 0)
	{
		if (atm->left)
			btree_insert_data(&atm->left, item, cmpf);
		else
			atm->left = btree_create_node(item);
	}
	else
	{
		if (atm->right)
			btree_insert_data(&atm->right, item, cmpf);
		else
			atm->right = btree_create_node(item);
	}
}
