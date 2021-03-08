#include "Victim.hpp"

Victim::Victim()
{
	Victim("noname");
}

Victim::Victim(std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &obj)
{
	Victim(obj.get_name());
}

Victim &Victim::operator=(Victim const &obj)
{
	this->set_name(obj.get_name());
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Victim const &obj)
{
	out << "I am " << obj.get_name() << " and I like otters!" << std::endl;
	return (out);
}

Victim::~Victim()
{
	std::cout << "Victim " << get_name() << " just died for no apparent reason!" << std::endl;
}

void Victim::getPolymorphed(void) const
{
	std::cout << get_name() << " has been turned into a cute little sheep!" << std::endl; 
}
