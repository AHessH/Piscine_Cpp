#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential", 145, 137)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential", 145, 137)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
{
	*this = obj;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	(void)obj;
	return (*this);
}

std::ostream			&operator<<(std::ostream &out, const PresidentialPardonForm &obj)
{
	out << obj.get_name() << " -name " << obj.get_sign_status() << "-sign_status " <<  obj.get_requred_exec() << "-requred_exec ";
  	out <<  obj.get_requred_sign() << "-requred_sign " << obj.get_target() <<"-target" << std::endl;
  	return (out);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		Form::execute(executor);
		std::cout << get_target() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	catch(std::exception &exception)
	{
	}
}
