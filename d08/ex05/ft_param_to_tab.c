/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 00:45:13 by issmith           #+#    #+#             */
/*   Updated: 2018/01/19 01:07:33 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

char					*ft_strdup(char *src)
{
	char	*tmp;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	tmp = (char*)malloc(sizeof(*tmp) * (size + 1));
	while (src[i] != '\0')
	{
		tmp[i] = src[i];
		i += 1;
	}
	tmp[i] = '\0';
	return (tmp);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*tab;

	i = 0;
	tab = malloc(sizeof(t_stock_par) * (ac + 2));
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i += 1;
	}
	tab[i].str = 0;
	tab[i].size_param = 0;
	return (tab);
}
