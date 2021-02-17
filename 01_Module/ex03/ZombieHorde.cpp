#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(unsigned int horde_size)
{
	c_horde_size = horde_size;
	zombie = new Zombie[c_horde_size];
	for (unsigned int i = 0; i < c_horde_size; i++)
		this->zombie[i].randomChump().setZombieType("HOOOORDEEE");
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "In horde destructor" << std::endl;
	delete [] zombie;
}

void ZombieHorde::announce()
{
	for (unsigned int i = 0; i < c_horde_size; i++)
		this->zombie[i].announce();
}
