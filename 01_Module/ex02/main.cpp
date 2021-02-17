#include "ZombieEvent.hpp"

int		main(void)
{
	Zombie z1("Igor", "Melnik");
	Zombie *z2;
	ZombieEvent ze1;
	ZombieEvent *ze2 = new ZombieEvent();

	z2 = new Zombie("Vasiliy", "Povar");
	delete z2;
	z2 = ze1.setZombieType("Tumba").newZombie("Ivan");
	delete z2;
	z2 = ze2->newZombie("Corgi");
	delete z2;
	z2 = ze2->randomChump();
	delete z2;
	delete ze2;
	z1.announce();
	return (0);
}
