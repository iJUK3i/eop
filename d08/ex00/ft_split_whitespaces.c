/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 23:46:14 by issmith           #+#    #+#             */
/*   Updated: 2018/01/19 00:17:59 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		ft_find_next(char *str, int i)
{
	while (ft_is_space(str[i]) && str[i] != '\0')
		i += 1;
	return (i);
}

int		ft_count(char *str)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		i = ft_find_next(str, i);
		words = str[i] != '\0' ? words + 1 : words;
		while (!ft_is_space(str[i]) && str[i] != '\0')
			i += 1;
	}
	return (words);
}

int		ft_length(char *str, int i)
{
	int j;

	j = i;
	while (!ft_is_space(str[j]) && str[j] != '\0')
		j += 1;
	return ((j - i) + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!str)
		return (0);
	words = malloc(sizeof(char *) * ft_count(str) + 1);
	while (j < ft_count(str))
	{
		i = ft_find_next(str, i);
		words[j] = malloc(sizeof(char) * (ft_length(str, i) + 1));
		while (!ft_is_space(str[i]) && str[i] != '\0')
			words[j][k++] = str[i++];
		words[j++][k] = '\0';
		k = 0;
	}
	words[j] = 0;
	return (words);
}
