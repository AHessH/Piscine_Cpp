#ifndef __SUPER_MYTANT_HPP
#define __SUPER_MYTANT_HPP

#include "Enemy.hpp"

#include <iostream>
#include <string>

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const &);
		~SuperMutant();
		void takeDamage(int);

};

#endif
