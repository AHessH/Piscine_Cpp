#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>
#include <string>

int		main(void)
{
	Bureaucrat a("vasya", 1);
	Bureaucrat b("danila", 150);
	Form form1("forma1", 20, 20);
	Form form2("forma2", 20, 20);

	form1.beSigned(b);
	form1.beSigned(a);

	b.signForm(form2);
	a.signForm(form2);
	a.signForm(form2);

	std::cout << form1;
	std::cout << form2;
	// a.incremente_grade();
	// std::cout << a;
	// b.decremente_grade();
	// std::cout << b;
	return (0);
}