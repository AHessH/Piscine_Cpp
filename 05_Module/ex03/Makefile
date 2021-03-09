NAME		:= a.out
HDRS		:= Form.hpp Bureaucrat.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
SRCS		:= Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp main.cpp 
OBJS		:= $(SRCS:.cpp=.o)


CXX			:= clang++
CXXFLAGS	:= -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CXX) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS) *_shrubbery

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re
