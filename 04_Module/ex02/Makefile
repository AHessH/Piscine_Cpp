NAME		:= a.out
HDRS		:= TacticalMarine.hpp ISpaceMarine.hpp AssaultTerminator.hpp ISquad.hpp Squad.hpp
SRCS		:= AssaultTerminator.cpp TacticalMarine.cpp Squad.cpp main.cpp
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
