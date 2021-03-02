#include "ScavTrap.hpp"

void ScavTrap::set_params()
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
}

ScavTrap::ScavTrap()
{
	set_params();
	std::cout << "My parents don't give me name :(" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	set_params();
	_name = name;
	std::cout << _name << " will be created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &robo)
{
	*this = robo;
}

ScavTrap::~ScavTrap()
{
	if (this->get_name() == "")
		std::cout << "Unname robo deactivated" << std::endl;
	else
		std::cout << _name << " robo deactivated" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &robo)
{
	std::cout << "Copy of the " << ((robo.get_name() == "") ? "unname" : robo.get_name()) << " created!" << std::endl;
	_hit_points = robo.get_hit_poinst();
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

void ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "SCAV-TP <" << _name <<"> attacks <" << target << "> at range causing <"
				<< _ranged_attack_damage << "> points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "SCAV-TP <" << _name <<"> attacks <" << target << "> at melee causing <"
				<< _melee_attack_damage << "> points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	damage = (amount <= _armor_damage_reduction) ? 0 : amount - _armor_damage_reduction;
	std::cout << "SCAV-TP <" << _name << "> take " << damage << " damage" << std::endl;
	_hit_points = (damage >= _hit_points) ? 0 : _hit_points - damage;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int heal;

	heal = (_hit_points + amount >= _max_hit_points) ? _max_hit_points - _hit_points : amount;
	std::cout << "SCAV-TP <" << _name << "> healed to " << heal << " hit points" << std::endl;
	_hit_points += heal;
}

void ScavTrap::challengeNewcomer(void) const
{
	unsigned int	num;
	std::string	action;

	num = random() % 2;
	action = (num == 0) ? "pretends to work" : "does nothing";
	std::cout << "SCAV-TP <" << _name << "> " << action << std::endl;
}
