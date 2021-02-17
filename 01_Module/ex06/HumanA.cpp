#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):c_weapon(weapon), c_name(name) 
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << c_name << " attacks with his " <<  c_weapon.getType() << std::endl;
}
