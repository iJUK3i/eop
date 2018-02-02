/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 22:11:08 by issmith           #+#    #+#             */
/*   Updated: 2018/01/25 22:17:38 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_error(int error, char *count)
{
	if (error == 2 || error == 20)
	{
		ft_puterror("cat: ");
		ft_puterror(count);
		ft_puterror(": No such file or directory\n");
		return (1);
	}
	else if (error == 21)
	{
		ft_puterror("cat: ");
		ft_puterror(count);
		ft_puterror(": Is a directory\n");
		return (1);
	}
	return (0);
}
