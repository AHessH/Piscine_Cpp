#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


#include <iostream>
#include <string>

int		main(void)
{
	Bureaucrat a("vasya", 1);
	Bureaucrat b("danila", 150);
	PresidentialPardonForm pre("me");
	ShrubberyCreationForm shr("tree");
	RobotomyRequestForm robo("robo");

	robo.execute(a);
	robo.execute(b);

	a.signForm(pre);
	a.executeForm(pre);

	robo.beSigned(a);
	robo.execute(a);

	shr.beSigned(a);
	shr.execute(b);
	shr.execute(a);

	return (0);
}