#ETNA PROJECT, $2021	\
 $my_crd	\
 File description:\
	Makefile to execute my program 

CC	= gcc
NAME	= ./Release/my_crd
SRC	= ./libmy/my_putchar.c	\
	  ./libmy/my_putstr.c	\
	  ./libmy/my_str_to_word_array.c	\
	  ./libmy/my_getnbr.c	\
	  ./libmy/my_add.c	\
	  ./libmy/search.c	\
	  ./libmy/my_delete.c	\
	  ./libmy/my_putnbr.c	\
	  main.c

OBJ	= $(SRC:%.c=%.o)
RM	= rm -f

$(NAME):		$(OBJ)
		$(CC) $(OBJ) -o $(NAME)
All:		$(NAME)

clean:
	 $(RM) $(OBJ)

fclean:		clean
	 $(RM) $(NAME) 

re:	 fclean All
