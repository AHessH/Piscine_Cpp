#ifndef __RAD_SCORPION_HPP
#define __RAD_SCORPION_HPP

#include "Enemy.hpp"

#include <iostream>
#include <string>

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const &);
		~RadScorpion();
};

#endif
