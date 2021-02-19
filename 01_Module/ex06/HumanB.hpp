#ifndef __HUMAN_B_HPP
#define __HUMAN_B_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	private:
		Weapon *c_weapon;
		std::string c_name;

	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif
