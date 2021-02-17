#ifndef __HUMAN_A_HPP
#define __HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &c_weapon;
		std::string c_name;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif
