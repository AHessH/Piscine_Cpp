#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	c_type = type;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
	c_type = type;
}

std::string Weapon::getType()
{
	return (c_type);
}
