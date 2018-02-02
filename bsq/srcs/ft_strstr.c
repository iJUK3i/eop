/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:18:12 by issmith           #+#    #+#             */
/*   Updated: 2018/01/16 16:20:49 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *i;
	char *j;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = str;
		j = to_find;
		while (*str != '\0' && *j != '\0' && *str == *j)
		{
			str++;
			j++;
		}
		if (!*j)
			return (i);
		str = i + 1;
	}
	return (0);
}
