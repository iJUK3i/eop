/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 17:26:26 by issmith           #+#    #+#             */
/*   Updated: 2018/01/16 17:31:26 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*(str + length) != '\0')
	{
		length = length + 1;
	}
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				save;

	i = 0;
	j = 0;
	save = ft_strlen(src);
	if (size == 0)
		src = dest;
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	dest[i] = '\0';
	return (save);
}
