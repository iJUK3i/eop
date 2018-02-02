/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 05:04:50 by issmith           #+#    #+#             */
/*   Updated: 2018/01/28 12:28:25 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# define BUF_SIZE 4096

void			check_rush(char *input, int x, int y);
void			print_rush(int r_nb, int x, int y, int multi);
int				check_valid(int x, int y);
int				ft_strcmp(char *str1, char *str2);
void			ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				ft_strlen(char *str);
int				len_x(char *str);
int				len_y(char *str);
char			*rush00(int x, int y);
char			*rush01(int x, int y);
char			*rush02(int x, int y);
char			*rush03(int x, int y);
char			*rush04(int x, int y);

#endif
