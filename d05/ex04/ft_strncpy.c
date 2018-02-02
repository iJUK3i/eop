/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:15:50 by issmith           #+#    #+#             */
/*   Updated: 2018/01/16 16:57:41 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int actual;

	actual = 0;
	while (actual < n && src[actual] != '\0')
	{
		dest[actual] = src[actual];
		actual = actual + 1;
	}
	if (actual < n)
	{
		dest[actual] = '\0';
		actual = actual + 1;
	}
	return (dest);
}
