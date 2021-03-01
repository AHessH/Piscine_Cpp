#include <iostream>
#include <string>
#include "FragTrap.hpp"

int		main(void)
{
	FragTrap a;
	a.set_name("Genry");
	FragTrap b(a);
	a.set_name("Vova");
	std::cout << b.get_name() << std::endl;
	b.beRepaired(10);
	std::cout << a.get_name() << std::endl;
	b.vaulthunter_dot_exe("Igor");
	b.takeDamage(10);
	return (0);
}