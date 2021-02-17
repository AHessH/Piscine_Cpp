#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde *horde2 = new ZombieHorde(5);
	horde2->announce();
	delete horde2;
	return (0);
}
