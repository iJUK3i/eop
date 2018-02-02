/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:19:13 by issmith           #+#    #+#             */
/*   Updated: 2018/01/18 01:28:31 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(int i, char *dest, char *src)
{
	int	j;

	i = 0;
	while (src[i++])
		;
	dest = (char*)malloc(1000000);
	if (dest)
	{
		j = 0;
		while (j < i)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
		return (dest);
	}
	else
		return (NULL);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*string;

	i = 0;
	string = NULL;
	while (src[i++])
		;
	string = (char *)malloc(i * sizeof(char));
	if (string == NULL)
		return (NULL);
	else if (string != NULL)
		return (string = ft_strcpy(i, string, src));
	else
		return (0);
}
