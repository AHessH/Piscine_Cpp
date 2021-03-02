#include <iostream>
#include <string>
#include "NinjaTrap.hpp"

int		main(void)
{
	ScavTrap si("sNikolay");
	FragTrap fi("fNikolay");
	ClapTrap ci("cNi");

	NinjaTrap fCopy;
	NinjaTrap fIvan("fIvan");
	NinjaTrap fCopy2(fIvan);

	fCopy = fIvan;
	std::cout << fCopy.get_name() << " " << fIvan.get_name() << " " << fCopy2.get_name() << std::endl;
	fIvan.beRepaired(10);
	fIvan.takeDamage(20);
	fIvan.beRepaired(10);
	fIvan.takeDamage(5);
	fIvan.rangedAttack("Evgeny");
	fIvan.meleeAttack("Vova");
	fIvan.ninjaShoebox(si);
	fIvan.ninjaShoebox(fi);
	fIvan.ninjaShoebox(ci);
	fIvan.ninjaShoebox(fCopy2);

	return (0);
}