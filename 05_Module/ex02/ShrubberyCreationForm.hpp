#ifndef __SHRUBBERY_BREATION_FORM_HPP
#define __SHRUBBERY_BREATION_FORM_HPP

#include <iostream>
#include <string>
#include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
    	ShrubberyCreationForm(ShrubberyCreationForm const &obj);
		ShrubberyCreationForm(std::string target);

		~ShrubberyCreationForm() {};
		
		std::string get_target() const {return (_target);};
		
		virtual void execute(Bureaucrat const & executor) const;
    	
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &);

};

std::ostream			&operator<< (std::ostream &out, const ShrubberyCreationForm &obj);

#endif
