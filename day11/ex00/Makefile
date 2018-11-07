# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/22 07:20:30 by aguiot--          #+#    #+#              #
#    Updated: 2018/08/22 10:28:40 by aguiot--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file 

SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/main.c

OBJECTS = ft_putchar.o \
	      ft_putstr.o \
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
