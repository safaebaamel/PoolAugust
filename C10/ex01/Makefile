
NAME=ft_cat

SRCS =  ft_cat.c\
	ft_strlen.c\
	ft_print_error.c\

OBJS = $(SRCS:.c=.o)

INC = includes

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	gcc $(FLAGS) -I $(INC) -c $^ -o $@

$(NAME): $(OBJS)
	gcc $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all

