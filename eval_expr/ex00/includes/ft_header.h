/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 05:04:50 by issmith           #+#    #+#             */
/*   Updated: 2018/01/28 17:53:19 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>

int				eval_expr(char *str);
void			ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				ft_strlen(char *str);
int				check_sum(char **input);
int				check_factor(char **input);
int				ft_do_op(int a, int b, char op);


#endif
