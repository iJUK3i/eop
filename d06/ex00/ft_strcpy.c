/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:12:28 by issmith           #+#    #+#             */
/*   Updated: 2018/01/16 16:15:12 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	actual;
	int	len;

	len = ft_strlen(src);
	actual = 0;
	while (actual < len)
	{
		dest[actual] = src[actual];
		actual = actual + 1;
	}
	dest[actual] = '\0';
	return (dest);
}
