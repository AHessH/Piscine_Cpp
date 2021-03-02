NAME		:= a.out
HDRS		:= FragTrap.hpp ScavTrap.hpp ClapTrap.hpp NinjaTrap.hpp
SRCS		:= FragTrap.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp main.cpp
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