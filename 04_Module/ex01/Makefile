NAME		:= a.out
HDRS		:= SuperMutant.hpp Character.hpp RadScorpion.hpp AWeapon.hpp PlasmaRifle.hpp Enemy.hpp PowerFist.hpp
SRCS		:= RadScorpion.cpp Character.cpp SuperMutant.cpp PlasmaRifle.cpp PowerFist.cpp Enemy.cpp AWeapon.cpp main.cpp
OBJS		:= $(SRCS:.cpp=.o)

CXX			:= clang++
CXXFLAGS	:= -std=c++98 -Wall -Werror -Wextra


all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CXX) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re
