#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "CLAP-TP My parents don't give me name :(" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	std::cout << "CLAP-TP " << _name << " will be created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &robo)
{
	*this = robo;
}

ClapTrap::~ClapTrap()
{
	if (this->get_name() == "")
		std::cout << "CLAP-TP Unname robo deactivated" << std::endl;
	else
		std::cout << "CLAP-TP " << _name << " robo deactivated" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &robo)
{
	std::cout << "CLAP-TP Copy of the " << ((robo.get_name() == "") ? "unname" : robo.get_name()) << " created!" << std::endl;
	_hit_points = robo.get_hit_points();
	_max_hit_points = robo.get_max_hit_points();
	_energy_points = robo.get_energy_points();
	_max_energy_points = robo.get_max_energy_points();
	_level = robo.get_level();
	_melee_attack_damage = robo.get_melee_attack_damage();
	_ranged_attack_damage = robo.get_ranged_attack_damage();
	_armor_damage_reduction = robo.get_armor_damage_reduction();
	_name = robo.get_name();
	return (*this);
}
