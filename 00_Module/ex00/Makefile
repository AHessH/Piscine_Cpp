SRC		=	megaphone.cpp
OBJ		=	$(SRC:.cpp=.o)
FLAGS	=	-Wall -Werror -Wextra
GCC		=	clang++ $(FLAGS)


%.o: %.c
	$(GCC) $< -o $@ 

all:$(OBJ)
	$(GCC) $(OBJ)

clean:
	rm -f *.o

fclean:clean
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re
