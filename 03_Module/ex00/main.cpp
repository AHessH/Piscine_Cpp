#include <iostream>
#include <string>
#include "FragTrap.hpp"

int		main(void)
{
	FragTrap Copy;
	FragTrap Ivan("Ivan");
	FragTrap Copy2(Ivan);

	Copy = Ivan;
	std::cout << Copy.get_name() << " " << Ivan.get_name() << " " << Copy2.get_name() << std::endl;
	Ivan.beRepaired(10);
	Ivan.takeDamage(20);
	Ivan.beRepaired(10);
	Ivan.takeDamage(5);
	Ivan.rangedAttack("Evgeny");
	Ivan.meleeAttack("Vova");
	Ivan.vaulthunter_dot_exe("Nikolay");
	return (0);
}