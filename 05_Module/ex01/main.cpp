#include "Bureaucrat.hpp"

#include <iostream>
#include <string>

int		main(void)
{
	Bureaucrat a("vasya", 1);
	Bureaucrat b("danila", 150);
	a.incremente_grade();
	std::cout << a;
	b.decremente_grade();
	std::cout << b;
	return (0);
}