
CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf
 
NAME = ft_display_file

SRC = ./main.c\

OBJ = $(SRC: .c=.o)

all : $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean :
	$(RM) $(OBJ)

fclean : clean 
	$(RM) $(NAME)

re : 	fclean all 

