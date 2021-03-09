#include "Intern.hpp"

Intern::Intern(Intern const &obj)
{
	*this = obj;
}

Intern	&Intern::operator=(Intern const &)
{
	return (*this);
}

Form *Intern::makeForm(std::string const &form, std::string const &name)
{
	int i = 0;
	std::string form_list[3] = {"presidental pardon", "robotomy request", "shrebbery creation"};
	Form *((Intern::*func[])(std::string const &)) = {&Intern::create_presidential, &Intern::create_robotomy, &Intern::create_shrubbery};

	for (; i < 3; i++)
	{
		if (form_list[i] == form)
		{
			std::cout << "Intern create form " << form << std::endl;
			return ((this->*func[i])(name));
		}
	}
	std::cout << form << " not finded!" << std::endl;
	return (NULL);
}
