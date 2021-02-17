#ifndef __ZOMBIE_HORDE_HPP
# define __ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	private:
		unsigned int	c_horde_size;
		Zombie			*zombie;

	public:
		ZombieHorde(unsigned int horde_size);
		~ZombieHorde();
		void announce();

};


#endif
