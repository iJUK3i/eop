/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 04:20:32 by issmith           #+#    #+#             */
/*   Updated: 2018/01/13 14:52:54 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	i = 0;

	while (i < j)
	{
		temp = str[i];
		str[i] = str[j-1];
		str[j-1] = temp;
		i++;
		j--;
	}
	return (str);
}

int main()
{
	char a[] = "going ham, to the top we dont stop. get it get it";
	char *b;
	b = ft_strrev(a);
	ft_putchar('\n');
	ft_putstr(b);
	ft_putchar('\n');
	return (0);
}
