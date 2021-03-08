#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &obj)
{
	this->_name = obj.getName();
	this->_damage = obj.getDamage();
	this->_apcost = obj.getAPCost();
}

PowerFist::~PowerFist()
{
}

PowerFist &PowerFist::operator=(PowerFist const &obj)
{
	this->_name = obj.getName();
	this->_damage = obj.getDamage();
	this->_apcost = obj.getAPCost();
	
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
