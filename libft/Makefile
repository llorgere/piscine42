NAME = libft.a
NAME2 = libft.so
SRC = ft_isalpha.c  ft_isdigit.c  ft_memalloc.c  ft_toupper.c ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_tolower.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c
OBJ = ft_isalpha.o  ft_isdigit.o  ft_memalloc.o  ft_toupper.o ft_isalnum.o  ft_isascii.o  ft_isprint.o  ft_tolower.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : function.o
	ar rc  $(NAME) $(OBJ)
	ranlib $(NAME)

so :	function2.o
	gcc -shared -fPIC $(OBJ) -o $(NAME2)

function.o :
	$(CC) $(CFLAGS) $(SRC)

function2.o :
	$(CC) $(CFLAGS) -fPIC $(SRC)

clean :
	/bin/rm -rf $(OBJ)

fclean : clean
	/bin/rm -rf $(NAME)
	/bin/rm -rf $(NAME2)

re : fclean all
