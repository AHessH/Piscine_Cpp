#ifndef __ZOMBIE_EVENT_HPP
# define __ZOMBIE_EVENT_HPP

#define NAME_STACK_SIZE 5

#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string c_type;

	public:
		ZombieEvent(){};
		~ZombieEvent();
		ZombieEvent &setZombieType(std::string type);
		Zombie *newZombie (std::string name);
		Zombie *randomChump();
};

#endif
