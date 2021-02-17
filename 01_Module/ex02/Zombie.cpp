#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" + c_name + "(" + c_type + ")> -- " + "Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	c_name = name;
	c_type = type;
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << "In Zombie destructor " << c_name << std::endl;
}
