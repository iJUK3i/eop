/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_other.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:14:47 by issmith           #+#    #+#             */
/*   Updated: 2018/01/28 18:52:29 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
** removes the spaces
*/

char	*prep_str(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	str2 = (char *)malloc(ft_strlen(str) + 1);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j++;
		}
		i++;
	}
	str2[j] = '\0';
	return (str2);
}

/*
**	this is a custom atoi function to separate chars to int
*/

int		custom_atoi(char **input)
{
	int nbr;
	int signe;

	nbr = 0;
	signe = 1;
	if ((*input)[0] == '+' || (*input)[0] == '-')
	{
		if ((*input)[0] == '-')
			signe = -1;
		*input += 1;
	}
	if ((*input)[0] == '(' || (*input)[0] == '[')
	{
		*input += 1;
		nbr = check_sum(input);
		if ((*input)[0] == ')' || (*input)[0] == ']')
			*input += 1;
		return (signe * nbr);
	}
	while ('0' <= (*input)[0] && (*input)[0] <= '9')
	{
		nbr = (nbr * 10) + (*input)[0] - '0';
		*input += 1;
	}
	return (signe * nbr);
}

/*
** this checks for div, mod, mul
*/

int		check_factor(char **input)
{
	int		left;
	int		right;
	char	op;

	left = custom_atoi(input);
	while ((*input)[0] == '*' || (*input)[0] == '/' || (*input)[0] == '%')
	{
		op = (*input)[0];
		*input += 1;
		right = custom_atoi(input);
		left = ft_do_op(left, right, op);
	}
	return (left);
}

/*
** checks for addition and subtraction
*/

int		check_sum(char **input)
{
	int		left;
	int		right;
	char	op;

	left = custom_atoi(input);
	while ((*input)[0] != '\0' && (*input)[0] != ')')
	{
		op = (*input)[0];
		*input += 1;
		if (op == '+' || op == '-')
			right = check_factor(input);
		else
			right = custom_atoi(input);
		left = ft_do_op(left, right, op);
	}
	return (left);
}

/*
** mallocs memory for the string, removes spaces, starts the functions
*/

int		eval_expr(char *str)
{
	char *n_str;

	n_str = (char *)malloc(sizeof(str) * 8 + 1);
	if (!n_str)
		ft_putstr("error: malloc n_str\n");
	n_str = prep_str(str);
	if (str[0] == '\0')
		return (0);
	free(n_str);
	return (check_sum(&n_str));
}
