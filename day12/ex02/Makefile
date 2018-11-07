# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/22 11:43:32 by aguiot--          #+#    #+#              #
#    Updated: 2018/08/22 14:23:32 by aguiot--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail 

SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_atoi.c \
	   srcs/main.c

OBJECTS = ft_putchar.o \
	      ft_putstr.o \
	      ft_atoi.o \
	      main.o

HEADERS = includes

CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -I $(HEADERS) -c $(SRCS)
	gcc $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
