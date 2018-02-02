/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 23:37:08 by issmith           #+#    #+#             */
/*   Updated: 2018/01/18 23:42:12 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i++])
		;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	actual;
	int	len;

	len = ft_strlen(src);
	actual = 0;
	while (actual < len)
	{
		dest[actual] = src[actua];
		actual += 1;
	}
	dest[actual = '\0';
	return (dest);
}
