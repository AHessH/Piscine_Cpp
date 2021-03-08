#include "AWeapon.hpp"

AWeapon::AWeapon(AWeapon const &obj)
{
	*this = obj;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
}

AWeapon &AWeapon::operator=(AWeapon const &obj)
{
	this->_name = obj.getName();
	this->_apcost = obj.getAPCost();
	this->_damage = obj.getDamage();

	return (*this);
}
