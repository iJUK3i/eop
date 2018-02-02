/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 19:36:17 by issmith           #+#    #+#             */
/*   Updated: 2018/02/01 01:42:08 by issmith          ###   ########.fr       */
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

char	key[3];
char	*temp;
char	*map;

typedef struct			s_mapz
{
	struct s_map	*next;
	struct s_map	*prev;
	char			*map;
}						t_mapz;

void	space_mgr(char key[3], int flag);
char	*read_file(char *str, char **input, int file);
void	lets_solve(char *map);
int		size_file(char **input, int x);
void	lets_go(char **input, int g);
void	insert_head(char *map);
void	insert_tail(char *map);
void	ft_putstr(char *str);
void	hold_maps(char *map);
void	ft_putnbr(int nb);
int		key_help(char key[3], char *map, int x, int a);
void	ft_putchar(char c);
int		ft_read(int nb_arg, char **input);
int		ft_atoi(char *str);
int		setup_key(char key[3], char *map);
int		eye_see(char **input, int g);
int		key_gen(char **input, int g);
int		line_error(char *map, int lines);
int		length_error(char *map);
int		ft_strlen(char *str);
int		get_lines(char *map);

#endif
