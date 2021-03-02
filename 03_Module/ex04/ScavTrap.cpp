#include "ScavTrap.hpp"

void ScavTrap::set_params()
{
	set_hit_points(100);
	set_max_hit_points(100);
	set_energy_points(50);
	set_max_energy_points(50);
	set_level(1);
	set_melee_attack_damage(20);
	set_ranged_attack_damage(15);
	set_armor_damage_reduction(3);
}

ScavTrap::ScavTrap()
{
	set_params();
	std::cout << "SCAV-TP My parents don't give me name :(" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	set_params();
	set_name(name);
	std::cout << "SCAV-TP " << get_name() << " will be created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &robo)
{
	*this = robo;
}

ScavTrap::~ScavTrap()
{
	if (this->get_name() == "")
		std::cout << "SCAV-TP Unname robo deactivated" << std::endl;
	else
		std::cout << "SCAV-TP " << get_name() << " robo deactivated" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &robo)
{
	std::cout << "SCAV-TP Copy of the " << ((robo.get_name() == "") ? "unname" : robo.get_name()) << " created!" << std::endl;
	set_hit_points(robo.get_hit_points());
	set_max_hit_points(robo.get_max_hit_points());
	set_energy_points(robo.get_energy_points());
	set_max_energy_points(robo.get_max_energy_points());
	set_level(robo.get_level());
	set_melee_attack_damage(robo.get_melee_attack_damage());
	set_ranged_attack_damage(robo.get_ranged_attack_damage());
	set_armor_damage_reduction(robo.get_armor_damage_reduction());
	set_name(robo.get_name());
	return (*this);
}

void ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "SCAV-TP <" << get_name() <<"> attacks <" << target << "> at range causing <"
				<< get_ranged_attack_damage() << "> points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "SCAV-TP <" << get_name() <<"> attacks <" << target << "> at melee causing <"
				<< get_melee_attack_damage() << "> points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	damage = (amount <= get_armor_damage_reduction()) ? 0 : amount - get_armor_damage_reduction();
	std::cout << "SCAV-TP <" << get_name() << "> take " << damage << " damage" << std::endl;
	set_hit_points((damage >= get_hit_points()) ? 0 : get_hit_points() - damage);
}

void ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int heal;

	heal = (get_hit_points() + amount >= get_max_hit_points()) ? get_max_hit_points() - get_hit_points() : amount;
	std::cout << "SCAV-TP <" << get_name() << "> healed to " << heal << " hit points" << std::endl;
	set_hit_points(heal + get_hit_points());
}
void ScavTrap::challengeNewcomer(void) const
{
	unsigned int	num;
	std::string	action;

	num = random() % 2;
	action = (num == 0) ? "pretends to work" : "does nothing";
	std::cout << "SCAV-TP <" << get_name() << "> " << action << std::endl;
}
