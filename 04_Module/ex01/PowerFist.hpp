#ifndef __POWER_FIST_HPP
#define __POWER_FIST_HPP

#include <iostream>
#include <string>

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist const &);
		PowerFist(std::string const & name, int apcost, int damage);
		~PowerFist();
		PowerFist &operator=(PowerFist const &);
		void setname(std::string name) {this->_name = name;};
		void attack() const;

};

#endif
