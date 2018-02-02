/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 04:20:32 by issmith           #+#    #+#             */
/*   Updated: 2018/01/12 07:22:59 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str);
	if (!str || !*str)
		ft_putstr("str: error NULL data");
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
		i++;
	}
	return (str);
}

int main()
{
	char *a;
	char str[] = "abcde";

	ft_putstr(str);
	write(1, "\n", 1);
	ft_putstr("output: ");
	a = ft_strrev(str);
	ft_putstr(a);
	write(1, "\n", 1);
	return 0;
}
