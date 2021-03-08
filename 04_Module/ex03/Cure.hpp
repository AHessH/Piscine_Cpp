#ifndef __CURE_HPP
#define __CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &src);
		~Cure() {};

		AMateria *clone(void) const;
		virtual void use(ICharacter &target);

		Cure &operator= (const Cure &rhs);

};

#endif
