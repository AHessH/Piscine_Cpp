#ifndef __FORM_HPP
#define __FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	private:
		std::string		_name;
		bool			_sign_status;
		int				_requred_sign;
    	int         	_requred_exec;
    	void        	check_requred(int, int) const;
    	void        	check_sign_access(Bureaucrat const &obj) const;
		void			check_exec_access(Bureaucrat const &obj) const;
		void			check_sign() const;

	public:
		Form();
    	Form(Form const &);
    	Form(std::string, int requred_sign, int requred_exec);
		~Form() {};

    	std::string   get_name() const {return (_name);};
    	bool          get_sign_status() const {return (_sign_status);};
    	int           get_requred_sign() const {return (_requred_sign);};
    	int           get_requred_exec() const {return (_requred_exec);};

    	void          beSigned(Bureaucrat const &obj);
		virtual void  execute(Bureaucrat const & executor) const;
    	Form		  &operator=(Form const &);

		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw() {return ("GradeTooHighException");};
		};

		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw() {return ("GradeTooLowException");};
		};
		class FormNotBeSignedException: public std::exception {
			virtual const char *what() const throw() {return ("FormNotBeSignedException");};
		};
};

std::ostream			&operator<< (std::ostream &out, const Form &obj);

#endif
