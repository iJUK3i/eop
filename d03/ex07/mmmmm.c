/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 04:20:32 by issmith           #+#    #+#             */
/*   Updated: 2018/01/12 09:05:27 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
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
	int		end;
	char	temp;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	len--;
	end = len;
	while (i < end)
	{
		temp = str[len];
		str[len] = str[i];
		len--;
		str[i] = temp;
		i++;
	}
	return (str);
}

int main()
{
	char *a;

	a = ft_strrev("hturt eht");
	ft_putstr(a);
	return 0;
}
