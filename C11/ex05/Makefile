
NAME = do-op
SRCS = srcs/ft_putchar.c \
       srcs/ft_atoi.c \
       srcs/ft_putstr.c \
       srcs/ft_putnbr.c \
       srcs/ft_strcmp.c \
       srcs/operation.c \
       srcs/main.c \
       srcs/do_op.c

INCS = srcs

OBJS = $(SRCS: .c=.o) 

FLAGS = -Wall -Werror -Wextra

all = $(NAME)

%.o: %.c
	gcc $(FLAGS) -I $(INCS) $^ -o $@

$(NAME): $(OBJS)
	gcc $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

