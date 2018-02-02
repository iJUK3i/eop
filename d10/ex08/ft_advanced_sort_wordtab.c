/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 09:54:18 by issmith           #+#    #+#             */
/*   Updated: 2018/01/23 10:40:02 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp) (char*, char*))
{
	int		min;
	int		i;
	char	*temp;

	min = 0;
	i = 1;
	while (tab[min + 1] != 0)
	{
		while (tab[i] != 0)
		{
			if (cmp(tab[min], tab[i]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[min];
				tab[min] = temp;
			}
			i += 1;
		}
		min += 1;
		i = min + 1;
	}
}
