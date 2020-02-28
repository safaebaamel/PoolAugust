
NAME = do_op
SRCS = srcs/ft_putchar.c \
       srcs/ft_atoi.c \
       srcs/ft_putstr.c \
       srcs/ft_putnbr.c \
       srcs/ft_add.c \
       srcs/ft_mod.c \
       srcs/ft_div.c \
       srcs/ft_mul.c \
       srcs/ft_min.c \
       srcs/main.c \
       srcs/do_op.c
FLAGS = -Wall -Werror -Wextra

all:
	gcc $(FLAGS) -I includes  $(SRCS) -c
	ar rc $(NAME) $(OFILES)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

