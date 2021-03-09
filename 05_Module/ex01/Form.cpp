#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{
  Form("undefined", 1, 1);
}

Form::Form(Form const &obj)
{
  *this = obj;
}

Form::Form(std::string name, int requred_sign, int requred_exec)
{
  _name = name;
  try
  {
  _requred_exec = requred_exec;
  _requred_sign = requred_sign;
  }
  catch(std::exception &exception)
  {
		std::cout << get_name() << " form Error: " << exception.what() << std::endl;
  }
  _sign_status = false;
}

Form		&Form::operator=(Form const &obj)
{
  _name = obj._name;
  _requred_exec = obj._requred_exec;
  _requred_sign = obj._requred_sign;
  _sign_status = obj._sign_status;
  return (*this);
}

void        Form::check_requred(int requred_exec, int requred_sign) const
{
  if (requred_exec > 150 || requred_sign > 150)
		throw Form::GradeTooLowException();
	else if (requred_exec < 1 || requred_sign < 1)
		throw Form::GradeTooHighException();
}

void        Form::check_access(Bureaucrat const &obj) const
{
  if (_requred_sign >= obj.get_grade())
    throw Form::GradeTooLowException();
}


std::ostream  &operator<< (std::ostream &out, const Form &obj)
{
  out << obj.get_name() << " -name " << obj.get_sign_status() << "-sign_status " <<  obj.get_requred_exec() << "-requred_exec ";
  out <<  obj.get_requred_sign() << "-requred_sign" << std::endl;
  return (out);
}

void          Form::beSigned(Bureaucrat const &obj)
{
  if (!_sign_status)
    std::cout << "Form " << get_name() << " has already been signed" << std::endl;
  else
  {
    try
    {
      check_access(obj);
      std::cout << obj.get_name() << " signs " << get_name() << std::endl;
    }
    catch(std::exception &exception)
    {
      std::cout << obj.get_name() << " cannot sign " << get_name() <<  " because " << exception.what() << std::endl;
    }
  }
}
