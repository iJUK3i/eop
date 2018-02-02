/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 19:36:17 by issmith           #+#    #+#             */
/*   Updated: 2018/02/01 06:30:38 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define N 1420
# define KGRN "\x1B[32m"
# define KRED "\x1B[31m"
# define KNRM "\x1B[0m"
# define KBLU "\x1B[34m"

char	g_key[3];
char	*g_temp;
char	*g_map;

void	space_mgr(char g_key[3], int flag);
char	*read_file(char *str, char **input, int file);
void	lets_solve(char *g_map);
int		size_file(char **input, int x);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		key_help(char g_key[3], char *g_map, int x, int a);
void	ft_putchar(char c);
int		ft_read(int nb_arg, char **input);
int		ft_atoi(char *str);
int		setup_key(char g_key[3], char *g_map);
int		key_gen(char **input, int g);
int		line_error(char *g_map, int lines);
int		length_error(char *g_map);
int		ft_strlen(char *str);
int		get_lines(char *g_map);
void	big_solve(char cache[N][N], int x, int y);

#endif
