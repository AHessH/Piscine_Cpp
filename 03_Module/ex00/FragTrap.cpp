#include "FragTrap.hpp"

void FragTrap::set_params()
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
}

FragTrap::FragTrap()
{
	set_params();
	std::cout << "My parents don't give me name :(" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	set_params();
	_name = name;
	std::cout << "Oh god, " << _name << " will be created!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &robo)
{
	*this = robo;
}

FragTrap::~FragTrap()
{
	if (this->get_name() == "")
		std::cout << "Unname robo deactivated" << std::endl;
	else
		std::cout << _name << " robo deactivated" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &robo)
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

void FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP <" << _name <<"> attacks <" << target << "> at range causing <"
				<< _ranged_attack_damage << "> points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP <" << _name <<"> attacks <" << target << "> at melee causing <"
				<< _melee_attack_damage << "> points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	damage = (amount <= _armor_damage_reduction) ? 0 : amount - _armor_damage_reduction;
	std::cout << "FR4G-TP <" << _name << "> take " << damage << " damage" << std::endl;
	_hit_points = (damage >= _hit_points) ? 0 : _hit_points - damage;
}

void FragTrap::beRepaired(unsigned int amount)
{
	unsigned int heal;

	heal = (_hit_points + amount >= _max_hit_points) ? _max_hit_points - _hit_points : amount;
	std::cout << "FR4G-TP <" << _name << "> healed to " << heal << " hit points" << std::endl;
	_hit_points += heal;
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
	std::cout << "FR4G-TP <" << _name <<"> attacks <" << target << "> " << random_attack[num].atack_name <<" <"
				<< random_attack[num].atack_damage << "> points of damage!" << std::endl;
}
