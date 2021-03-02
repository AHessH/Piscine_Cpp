#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap Copy;
	ScavTrap Ivan("Ivan");
	ScavTrap Copy2(Ivan);

	Copy = Ivan;
	std::cout << Copy.get_name() << " " << Ivan.get_name() << " " << Copy2.get_name() << std::endl;
	Ivan.beRepaired(10);
	Ivan.takeDamage(20);
	Ivan.beRepaired(10);
	Ivan.takeDamage(5);
	Ivan.rangedAttack("Evgeny");
	Ivan.meleeAttack("Vova");
	Ivan.challengeNewcomer();
	return (0);
}