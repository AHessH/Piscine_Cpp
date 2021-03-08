#ifndef __A_WEAPON_HPP
#define __A_WEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
	protected:
		std::string _name;
		int _apcost; 
		int _damage;
	public:
		AWeapon() {};
		AWeapon(AWeapon const &);
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon() {};
		AWeapon &operator=(AWeapon const &);

		std::string  getName() const {return (_name);};
		int getAPCost() const {return (_apcost);};
		int getDamage() const {return (_damage);};
		virtual void attack() const = 0;

};

#endif
