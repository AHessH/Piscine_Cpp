#ifndef __ROBOTOMY_REQUEST_FORM_HPP
#define __ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm();
    	RobotomyRequestForm(RobotomyRequestForm const &obj);
		RobotomyRequestForm(std::string target);

		~RobotomyRequestForm() {};
		
		std::string get_target() const {return (_target);};
		
		virtual void execute(Bureaucrat const & executor) const;
    	
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &);

};

std::ostream			&operator<< (std::ostream &out, const RobotomyRequestForm &obj);

#endif
