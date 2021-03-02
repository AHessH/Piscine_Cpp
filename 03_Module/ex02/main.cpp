#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap fCopy;
	FragTrap fIvan("fIvan");
	FragTrap fCopy2(fIvan);

	fCopy = fIvan;
	std::cout << fCopy.get_name() << " " << fIvan.get_name() << " " << fCopy2.get_name() << std::endl;
	fIvan.beRepaired(10);
	fIvan.takeDamage(20);
	fIvan.beRepaired(10);
	fIvan.takeDamage(5);
	fIvan.rangedAttack("Evgeny");
	fIvan.meleeAttack("Vova");

	ScavTrap sCopy;
	ScavTrap sIvan("sIvan");
	ScavTrap sCopy2(sIvan);

	sCopy = sIvan;
	std::cout << sCopy.get_name() << " " << sIvan.get_name() << " " << sCopy2.get_name() << std::endl;
	sIvan.beRepaired(10);
	sIvan.takeDamage(20);
	sIvan.beRepaired(10);
	sIvan.takeDamage(5);
	sIvan.rangedAttack("Evgeny");
	sIvan.meleeAttack("Vova");
	return (0);
}