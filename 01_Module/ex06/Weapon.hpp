#ifndef __WEAPON_HPP
#define __WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string c_type;

	public:
		Weapon(std::string type);
		~Weapon();
		void setType(std::string type);
		std::string getType();
};

#endif
