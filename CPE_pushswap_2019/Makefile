##
## EPITECH PROJECT, 2019
## Push_swap
## File description:
## Makefile
##

NAME	=	push_swap

SRC	=	src/pushswap.c		\
		src/special_cases.c	\
		src/bubble_sort.c	\
		src/commands.c		\
		src/is_list_sorted.c	\
		src/sort_list.c		\
		src/my_atoi.c		\
		src/swap_elem.c		\
		src/error_handling.c	\
		src/my_strlen.c		\
		src/my_putstr.c		\
		src/my_putchar.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS=	-I./include/

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
