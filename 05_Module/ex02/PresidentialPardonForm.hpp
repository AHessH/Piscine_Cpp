#ifndef __PRESIDENTAL_PARDON_FORM_HPP
#define __PRESIDENTAL_PARDON_FORM_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();
    	PresidentialPardonForm(PresidentialPardonForm const &obj);
		PresidentialPardonForm(std::string target);

		~PresidentialPardonForm() {};
		
		std::string get_target() const {return (_target);};

		virtual void execute(Bureaucrat const & executor) const;

    	PresidentialPardonForm	&operator=(PresidentialPardonForm const &);

};

std::ostream			&operator<< (std::ostream &out, const PresidentialPardonForm &obj);

#endif
