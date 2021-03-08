#include "Peon.hpp"

Peon::Peon()
{
	Peon("noname");
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}


Peon::Peon(Peon const &obj)
{
	Peon(obj.get_name());
}

Peon &Peon::operator=(Peon const &obj)
{
	this->set_name(obj.get_name());
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Peon const &obj)
{
	out << "I am " << obj.get_name() << " and I like otters!" << std::endl;
	return (out);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << get_name() << " has been turned into a pink pony!" << std::endl; 
}
