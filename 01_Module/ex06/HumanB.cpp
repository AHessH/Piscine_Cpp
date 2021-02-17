#include "HumanB.hpp"

HumanB::HumanB(std::string name): c_name(name) 
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << c_name << " attacks with his " <<  c_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	c_weapon = &weapon;
}
