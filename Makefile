# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/23 12:42:28 by jpizarro          #+#    #+#              #
#    Updated: 2021/05/24 11:02:40 by jpizarro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = push_swap

SRCS = push_swap.c $(wildcard ./utils/*.c)

OBJS = $(SRCS:.c=.o)

LIBS = libft/libft.h

STATICS = $(LIBS:.h=.a)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(STATICS)
	echo "Creating $@"
	$(CC) $(CFLAGS) $(OBJS) $(STATICS) -o $@
	echo "$@ is ready!"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(STATICS):
	cd libft/ && $(MAKE)

clean:
	echo "Cleaing up binary files"
	$(RM) $(OBJS)
	$(RM) $(wildcard *.o) $(wildcard */*.o) ###########
	cd libft/ && $(MAKE) $@

fclean: clean
	echo "also $(NAME)"
	$(RM) $(NAME)
	cd libft/ && $(MAKE) $@

re: fclean all
