#include "NinjaTrap.hpp"

void NinjaTrap::set_params()
{
	set_hit_points(60);
	set_max_hit_points(60);
	set_energy_points(120);
	set_max_energy_points(120);
	set_level(1);
	set_melee_attack_damage(60);
	set_ranged_attack_damage(5);
	set_armor_damage_reduction(0);
}

NinjaTrap::NinjaTrap()
{
	set_params();
	std::cout << "NINJA-TP My parents don't give me name :(" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	set_params();
	set_name(name);
	std::cout << "NINJA-TP " << get_name() << " will be created!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &robo)
{
	*this = robo;
}

NinjaTrap::~NinjaTrap()
{
	if (this->get_name() == "")
		std::cout << "NINJA-TP Unname robo deactivated" << std::endl;
	else
		std::cout << "NINJA-TP " << get_name() << " robo deactivated" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &robo)
{
	std::cout << "NINJA-TP Copy of the " << ((robo.get_name() == "") ? "unname" : robo.get_name()) << " created!" << std::endl;
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

void NinjaTrap::rangedAttack(std::string const & target) const
{
	std::cout << "NINJA-TP <" << get_name() <<"> attacks <" << target << "> at range causing <"
				<< get_ranged_attack_damage() << "> points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target) const
{
	std::cout << "NINJA-TP <" << get_name() <<"> attacks <" << target << "> at melee causing <"
				<< get_melee_attack_damage() << "> points of damage!" << std::endl;
}

void NinjaTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	damage = (amount <= get_armor_damage_reduction()) ? 0 : amount - get_armor_damage_reduction();
	std::cout << "NINJA-TP <" << get_name() << "> take " << damage << " damage" << std::endl;
	set_hit_points((damage >= get_hit_points()) ? 0 : get_hit_points() - damage);
}

void NinjaTrap::beRepaired(unsigned int amount)
{
	unsigned int heal;

	heal = (get_hit_points() + amount >= get_max_hit_points()) ? get_max_hit_points() - get_hit_points() : amount;
	std::cout << "NINJA-TP <" << get_name() << "> healed to " << heal << " hit points" << std::endl;
	set_hit_points(heal + get_hit_points());
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & trap)
{
	std::cout << "NINJA-TP <" << get_name() << "> special attack to NINJA-TP " << trap.get_name() << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const & trap)
{
	std::cout << "NINJA-TP <" << get_name() << "> special attack to CLAP-TP " << trap.get_name() << std::endl;

}

void NinjaTrap::ninjaShoebox(FragTrap const & trap)
{
	std::cout << "NINJA-TP <" << get_name() << "> special attack to FR4G-TP " << trap.get_name() << std::endl;

}

void NinjaTrap::ninjaShoebox(ScavTrap const & trap)
{
	std::cout << "NINJA-TP <" << get_name() << "> special attack to SCAV-TP " << trap.get_name() << std::endl;

}
