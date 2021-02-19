#include "ZombieHorde.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

int		main(void)
{
	ZombieHorde *horde2 = new ZombieHorde(5);
	horde2->announce();
	delete horde2;
	return (0);
}
