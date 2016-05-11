##
## Makefile for  in /Users/stevemanogarane/Desktop/dicowesh
## 
## Made by MANOGARANE Steve »
## Login   <manoga_s »@etna-alternance.net>
## 
## Started on  Fri Apr  7 14:14:22 2016 MANOGARANE Steve »
## Last update Fri Apr  8 16:56:54 2016 MANOGARANE Steve »
##

CC      = 	gcc -W -Werror -Wall -g3

NAME	=	dicowesh

SRC	= 	main.c \
		my_putchar.c \
		sort_fr.c \
		sort_wesh.c \
		readLine.c \
		my_swap.c \
		add_mot.c \
		my_putstr.c \
		my_strcmp.c \
		aff_dico_fr.c \
		aff_dico_wesh.c \
		afficheMenu.c \
		fr_to_wesh.c \
		menu.c \
		pseudo_main.c \
		wesh_to_fr.c \
		wrongchoice.c \
		ajout_def.c

OBJ	= 	$(SRC:%.c=%.o)
RM	= 	rm -f

$(NAME):	$(OBJ)
		$(CC)  $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all
