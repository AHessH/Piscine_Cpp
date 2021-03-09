#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy", 145, 137)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy", 145, 137)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	*this = obj;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	(void)obj;
	return (*this);
}

std::ostream			&operator<<(std::ostream &out, const RobotomyRequestForm &obj)
{
	out << obj.get_name() << " -name " << obj.get_sign_status() << "-sign_status " <<  obj.get_requred_exec() << "-requred_exec ";
  	out <<  obj.get_requred_sign() << "-requred_sign " << obj.get_target() <<"-target" << std::endl;
  	return (out);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		Form::execute(executor);
		std::cout << "Bzzzzzzz..." << std::endl;
		if (random() % 2)
			std::cout << get_target() << " has been robotomized!" << std::endl;
		else
			std::cout << get_target() << " failure robotomize!" << std::endl;
	}
	catch(std::exception &exception)
	{
	}
}
