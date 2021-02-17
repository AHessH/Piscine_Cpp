#ifndef __HUMAN_HPP
#define __HUMAN_HPP
#include "Brain.hpp"

class Human
{
	private:
		Brain brain;

	public:
		Brain *identify();
		Brain &getBrain();
		Human(){};
		~Human(){};
};

#endif
