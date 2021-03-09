#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <iostream>
#include <string>

int		main(void)
{
	Intern intern;

	Form *pre = intern.makeForm("presidental pardon", "pre");
	Form *rob = intern.makeForm("robotomy request", "rob");
	Form *shr = intern.makeForm("shrebbery creation", "shr");
	Form *undef = intern.makeForm("undef", "undef");

	std::cout << *pre << *rob << *shr;
	return (0);
}