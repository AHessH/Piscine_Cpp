#ifndef __BUREAUCRAT_HPP
#define __BUREAUCRAT_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class Bureaucrat
{
	private:
		std::string		_name;
		int				_grade;
		void			check_grade(int grade);
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &);
		Bureaucrat(std::string const &, int);
		~Bureaucrat() {};

		std::string		get_name(void) const {return (_name);};
		int				get_grade(void) const {return (_grade);};
		void			set_name(std::string name) {_name = name;};
		void			set_grade(int grade);

		void			incremente_grade(void) {set_grade(get_grade() - 1);};
		void			decremente_grade(void) {set_grade(get_grade() + 1);};
		void			signForm(Form &obj) const {obj.beSigned(*this);};
		void			executeForm(Form const & form);

		Bureaucrat		&operator=(Bureaucrat const &);

		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw() {return ("GradeTooHighException");};
		};

		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw() {return ("GradeTooLowException");};
		};
};

std::ostream			&operator<< (std::ostream &out, const Bureaucrat &obj);

#endif
