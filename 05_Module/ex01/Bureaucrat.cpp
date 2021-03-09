#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	_grade = 150;
	_name = "";
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	*this = obj;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
	set_grade(grade);
	set_name(name);
}

Bureaucrat		&Bureaucrat::operator=(Bureaucrat const &obj)
{
	set_grade(obj.get_grade());
	set_name(obj.get_name());
	return (*this);
}

void			Bureaucrat::check_grade(int grade)
{
	if (grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void			Bureaucrat::set_grade(int grade)
{
	try
	{
		check_grade(grade);
		_grade = grade;
	}
	catch (std::exception &exception)
	{
		std::cout << get_name() << " Error: " << exception.what() << std::endl;
	}
};

std::ostream	&operator<< (std::ostream &out, const Bureaucrat &obj)
{
	out << obj.get_name() << ", bureaucrat grade " << obj.get_grade() << std::endl;
	return (out);
}
