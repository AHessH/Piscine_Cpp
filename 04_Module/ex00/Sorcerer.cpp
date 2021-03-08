#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	Sorcerer("noname", "notitle");
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << get_name() << ", " << get_title() << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &obj)
{
	Sorcerer(obj.get_name(), obj.get_title());
}

Sorcerer &Sorcerer::operator=(Sorcerer const &obj)
{
	this->set_name(obj.get_name());
	this->set_title(obj.get_title());

	return (*this);
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &obj)
{
	out << "I am " << obj.get_name() << ", " << obj.get_title() << ", and I like ponies!" << std::endl;
	return (out);
}

Sorcerer::~Sorcerer()
{
	std::cout << get_name() << ", " << get_title() <<  ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::polymorph(Victim const &obj) const
{
	obj.getPolymorphed();
}

void Sorcerer::polymorph(Peon const &obj) const
{
	obj.getPolymorphed();
}