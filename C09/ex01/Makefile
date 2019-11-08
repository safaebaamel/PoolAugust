
NAME = libft.a
SRCS = srcs/ft_putchar.c \
       srcs/ft_putstr.c \
       srcs/ft_strcmp.c \
       srcs/ft_strlen.c \
       srcs/ft_swap.c
OFILES = ft_putchar.o \
       ft_putstr.o \
       ft_strcmp.o \
       ft_strlen.o \
       ft_swap.o
FLAGS = -Wall -Werror -Wextra

all:
	gcc $(FLAGS) -I includes  $(SRCS) -c
	ar rc $(NAME) $(OFILES)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

