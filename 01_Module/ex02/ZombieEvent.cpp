#include "ZombieEvent.hpp"
#include <cstdlib>
ZombieEvent &ZombieEvent::setZombieType(std::string type)
{
	c_type = type;
	return (*this);
}

Zombie *ZombieEvent::newZombie (std::string name)
{
	if (c_type.empty())
		c_type = std::string("none");
	return (new Zombie(name, c_type));
}

Zombie *ZombieEvent::randomChump()
{
	std::string name_stack[NAME_STACK_SIZE] = {"Anna", "Henry", "Pembrock", "Empty", "Aleksander"};

	srand(time(0));
	return (newZombie(name_stack[rand() % NAME_STACK_SIZE]));
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "In ZombieEvent destructor " << c_type << std::endl;
}
