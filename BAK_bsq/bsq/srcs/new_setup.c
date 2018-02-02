/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_setup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 01:49:15 by issmith           #+#    #+#             */
/*   Updated: 2018/02/01 01:49:18 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
**  called by the error_check ft
**  this function just makes sure the actual lines match the map key
*/

int		get_lines(char *map)
{
	int		a;
	char	*temp;
	int		j;

	j = 0;
	a = 0;
	temp = (char *)malloc(sizeof(char) * (1000) + 1);
	while (map[a] != '\n')
	{
		a++;
		if (map[a] == '\n')
		{
			while (j < a - 3)
			{
				temp[j] = map[j];
				j++;
			}
		}
	}
	a = ft_atoi(temp);
	return (a);
}



/*
**  called by error_check ft
**  check to make sure there are a correct # of lines
*/

int		line_error(char *map, int lines)
{
	int a;
	int j;
	int flip;

	a = 0;
	j = 0;
	flip = 1;
	while (map[a] != '\0')
	{
		if (map[a] == '\n' && flip == 0)
			j++;
		if (flip == 1 && map[a] == '\n')
			flip = 0;
		
		a++;
	}
	if (lines - j == 0)
		return (0);
	else
		return (1);
}

/*
**  called by error_check ft
**  checks to make sure all lines are equal length
*/

int		length_error(char *map)
{
	int	flip;
	int	a;
	int j;
	int max;
	
	j = 0;
	a = 0;
	flip = 1;
	max = 0;
	while (map[a] != '\0')
	{

		while (flip == 0 && map[a] != '\n')
		{
			j++;
			a++;
			if (map[a] == '\n' && max != 0)
			{
				if (j != max)
					return (1);
			}
			else if (map[a] == '\n' && max == 0)
				j = max;
		}		
		if (flip == 1 && map[a] == '\n')
			flip = 0;
		a++;
	}
	return (0);
}
