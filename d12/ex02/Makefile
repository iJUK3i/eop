# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: issmith <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 22:10:31 by issmith           #+#    #+#              #
#    Updated: 2018/01/25 23:32:05 by issmith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
LIB = libft_tail.a
LN = ft_tail

IDIR = ./includes/
SRC = ./srcs/*.c 
OBJS = *.o
MN = main.c

GCC = gcc -Wall -Werror -Wextra
OP = -c
NN = norminette -R CheckForbiddenSourceHeader */*c
RM = /bin/rm -f
AR = ar rcv
IX = ranlib
L = -L. -l

all: $(NAME)

$(NAME):
	$(GCC) $(OP) $(SRC) -I$(IDIR)
	$(AR) $(LIB) $(OBJS)
	$(IX) $(LIB)
	$(GCC) -o $(NAME) -I$(IDIR) $(L)$(LN) $(MN)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIB) $(NAME)
