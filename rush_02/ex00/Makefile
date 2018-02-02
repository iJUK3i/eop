# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: issmith <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 22:10:31 by issmith           #+#    #+#              #
#    Updated: 2018/01/28 11:59:14 by issmith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
LIB = librush-2.a
LN = rush-2

IDIR = ./includes/
SRC = ./srcs/*.c 
OB = *.o
MN = main.c

GCC = gcc -Wall -Werror -Wextra
OP = -c
RM = /bin/rm -f
AR = ar rcv
IX = ranlib
L = -L. -l

all: $(NAME)

$(NAME):
	$(GCC) $(OP) $(SRC) -I$(IDIR)
	$(AR) $(LIB) $(OB)
	$(IX) $(LIB)
	$(GCC) -o $(NAME) -I$(IDIR) $(L)$(LN) $(MN)
	$(RM) $(OB)

o:
	$(GCC) $(OP) $(SRC) -I$(IDIR)
	$(AR) $(LIB) $(OB)
	$(IX) $(LIB)
	$(GCC) -o $(NAME) -I$(IDIR) $(L)$(LN) $(MN)

clean:
	$(RM) $(OB)

fclean: clean
	$(RM) $(LIB) $(NAME)

re: fclean all
