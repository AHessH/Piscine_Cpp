#ifndef __FORM_HPP
#define __FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	private:
	  std::string	_name;
		bool		    _sign_status;
		int			    _requred_sign;
    int         _requred_exec;
    void        check_requred(int, int) const;
    void        check_access(Bureaucrat const &obj) const;

	public:
		Form();
    Form(Form const &);
    Form(std::string , int, int);
		~Form() {};

    std::string   get_name() const {return (_name);};
    bool          get_sign_status() const {return (_sign_status);};
    int           get_requred_sign() const {return (_requred_sign);};
    int           get_requred_exec() const {return (_requred_exec);};

    void          beSigned(Bureaucrat const &obj);
		
    Form		      &operator=(Form const &);

		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw() {return ("GradeTooHighException");};
		};

		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw() {return ("GradeTooLowException");};
		};
};

std::ostream			&operator<< (std::ostream &out, const Form &obj);

#endif
