NAME = do-op

SRCS = srcs/main.c \
	   srcs/calc.c \
	   srcs/ft_atoi.c \
	   srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_putnbr.c \

HEADERS = includes

FLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I $(HEADERS) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f *.o
	/bin/rm -f $(NAME)

re: clean all
