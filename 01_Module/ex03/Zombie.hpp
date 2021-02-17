#ifndef __ZOMBIE_HPP
# define __ZOMBIE_HPP
#include <iostream>
#include <string>
#include <stdlib.h>

#define NAME_STACK_SIZE 5

class Zombie
{
	private:
		std::string c_name;
		std::string c_type;

	public:
		Zombie(){};
		Zombie(std::string name, std::string type);
		~Zombie();
		Zombie &setZombieType(std::string type);
		Zombie &randomChump();
		void announce();

};

#endif
