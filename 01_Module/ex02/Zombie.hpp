#ifndef __ZOMBIE_HPP
# define __ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string c_name;
		std::string c_type;

	public:
		Zombie(){};
		Zombie(std::string name, std::string type);
		~Zombie();
		void announce();

};

#endif
