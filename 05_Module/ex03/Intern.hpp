#ifndef __INTERN_HPP
#define __INTERN_HPP

#include <iostream>
#include <string>

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		Form *create_presidential(std::string const &name) {return (new PresidentialPardonForm(name));};
		Form *create_robotomy(std::string const &name) {return (new RobotomyRequestForm(name));};
		Form *create_shrubbery(std::string const &name) {return (new ShrubberyCreationForm(name));};

	public:
		Intern() {};
	    Intern(Intern const &obj);

		~Intern() {};

		Form *makeForm(std::string const &form, std::string const &name);
	    Intern	&operator=(Intern const &);
};

#endif
