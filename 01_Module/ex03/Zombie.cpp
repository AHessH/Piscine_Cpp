#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" + c_name + "(" + c_type + ")> -- " + "Braiiiiiiinnnssss..." << std::endl;
	std::cout << this << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	c_name = name;
	c_type = type;
}

Zombie::~Zombie()
{
	std::cout << "In Zombie destructor " << c_name << std::endl;
}

Zombie &Zombie::setZombieType(std::string type)
{
	c_type = type;
	return (*this);
}

Zombie &Zombie::randomChump()
{
	std::string name_stack[NAME_STACK_SIZE] = {"Anna", "Henry", "Pembrock", "Empty", "Aleksander"};

	this->c_name = name_stack[random() % NAME_STACK_SIZE];
	return (*this);
}
