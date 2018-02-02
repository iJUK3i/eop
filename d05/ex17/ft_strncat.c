/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 17:17:57 by issmith           #+#    #+#             */
/*   Updated: 2018/01/16 17:20:34 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*(str + length) != '\0')
	{
		length = length + 1;
	}
	return (length);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i = i + 1;
	}
	dest[len + i] = '\0';
	return (dest);
}
