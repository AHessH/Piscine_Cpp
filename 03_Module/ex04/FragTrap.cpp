#include "FragTrap.hpp"

void FragTrap::set_params()
{
	set_hit_points(100);
	set_max_hit_points(100);
	set_energy_points(100);
	set_max_energy_points(100);
	set_level(1);
	set_melee_attack_damage(30);
	set_ranged_attack_damage(20);
	set_armor_damage_reduction(5);
}

FragTrap::FragTrap()
{
	set_params();
	std::cout << "FR4G-TP My parents don't give me name :(" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	set_params();
	set_name(name);
	std::cout << "FR4G-TP " << get_name() << " will be created!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &robo)
{
	*this = robo;
}

FragTrap::~FragTrap()
{
	if (this->get_name() == "")
		std::cout << "FR4G-TP Unname robo deactivated" << std::endl;
	else
		std::cout << "FR4G-TP " << get_name() << " robo deactivated" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &robo)
{
	std::cout << "FR4G-TP Copy of the " << ((robo.get_name() == "") ? "unname" : robo.get_name()) << " created!" << std::endl;
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

void FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP <" << get_name() <<"> attacks <" << target << "> at range causing <"
				<< get_ranged_attack_damage() << "> points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP <" << get_name() <<"> attacks <" << target << "> at melee causing <"
				<< get_melee_attack_damage() << "> points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	damage = (amount <= get_armor_damage_reduction()) ? 0 : amount - get_armor_damage_reduction();
	std::cout << "FR4G-TP <" << get_name() << "> take " << damage << " damage" << std::endl;
	set_hit_points((damage >= get_hit_points()) ? 0 : get_hit_points() - damage);
}

void FragTrap::beRepaired(unsigned int amount)
{
	unsigned int heal;

	heal = (get_hit_points() + amount >= get_max_hit_points()) ? get_max_hit_points() - get_hit_points() : amount;
	std::cout << "FR4G-TP <" << get_name() << "> healed to " << heal << " hit points" << std::endl;
	set_hit_points(heal + get_hit_points());
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	t_random_atack random_attack[MAX_ATACK];
	unsigned int num;

	random_attack[0].atack_damage = 15;
	random_attack[0].atack_name = "Ko Uchi";
	random_attack[1].atack_damage = 40;
	random_attack[1].atack_name = "Mai Tobi Geri";
	random_attack[2].atack_damage = 20;
	random_attack[2].atack_name = "Seiken";
	random_attack[3].atack_damage = 15;
	random_attack[3].atack_name = "Tsuki";
	random_attack[4].atack_damage = 30;
	random_attack[4].atack_name = "Mawashi Geri";

	num = random() % MAX_ATACK;
	std::cout << "FR4G-TP <" << get_name() <<"> attacks <" << target << "> " << random_attack[num].atack_name << " "
				<< random_attack[num].atack_damage << "> points of damage!" << std::endl;
}
