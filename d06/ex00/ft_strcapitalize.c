/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:33:13 by issmith           #+#    #+#             */
/*   Updated: 2018/01/16 16:38:21 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		is_alpha(char c)
{
	return (is_lower(c) || is_upper(c) || (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next_w;
	char	c;

	i = 0;
	next_w = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (next_w && is_alpha(c))
		{
			str[i] = is_lower(c) ? c - 32 : str[i];
			next_w = 0;
		}
		else if (!next_w && is_upper(c))
			str[i] = c + 32;
		else if (!is_alpha(c))
			next_w = 1;
		i = i + 1;
	}
	return (str);
}
