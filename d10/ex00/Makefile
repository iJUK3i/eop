# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: issmith <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 22:10:31 by issmith           #+#    #+#              #
#    Updated: 2018/01/23 08:52:42 by issmith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
LIB = libft.a
LN = ft

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = includes
MN = main.c

GCC = gcc -Wall -Werror -Wextra
OP = -c
RM = /bin/rm -f
AR = ar rcv
IX = ranlib
L = -L. -l

all: $(NAME)

$(NAME):
	$(GCC) $(OP) $(SRC) -I$(HEADER)
	$(AR) $(LIB) $(OBJS)
	$(IX) $(LIB)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIB) $(NAME)

re: fclean all
