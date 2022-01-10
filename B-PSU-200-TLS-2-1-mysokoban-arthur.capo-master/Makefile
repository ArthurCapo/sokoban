##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC = lib/my/my_putchar.c \
      lib/my/my_put_nbr.c \
      lib/my/my_putstr.c \
      lib/my/my_printf.c \
	  lib/my/my_strlen.c \
	  lib/my/my_strcp.c \
	  src/display.c \
	  src/key_pressed.c \
	  src/move_player.c \
	  src/play.c \

OBJ = my_printf.o \
	  my_put_nbr.o \
	  my_putchar.o \
	  my_putstr.o \
	  my_strlen.o \
	  display.o \
	  key_pressed.o \
	  move_player.o \
	  play.o \
	  my_strcp.o \
	
NAME = libmy.a

NAME2 = my_sokoban

all: compil_lib compile_sokoban

compile_sokoban: 
	gcc -o $(NAME2) sokoban.c -Iinclude -L. -lmy -lncurses

compil_lib:
	gcc -c $(SRC) -Iinclude -Llib/my
	ar rc $(NAME) $(OBJ)

clean:
	rm $(OBJ)
	rm my_sokoban

fclean:	clean
	rm -f $(NAME)

re:	 fclean all
