##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	src/main.c \
		src/my_engine.c \
		src/my_get.c \
		src/my_put.c \
		src/my_sorter_basics.c \
		src/my_sorter_move.c \
		src/my_sorter_rotation.c \
		src/my_sorter.c \
		src/my_string.c

CFLAGS	=	-Wall -Wextra

INCLUDE =	-I include -o

LIB	=	-g -lm

NAME	=	push_swap

all:	$(NAME)

$(NAME):
	gcc $(SRC) $(CFLAGS) $(INCLUDE) $(NAME) $(LIB)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
