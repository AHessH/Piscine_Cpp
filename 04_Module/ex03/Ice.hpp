#ifndef __ICE_HPP
#define __ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &src);
		~Ice() {};

		AMateria *clone(void) const;
		virtual void use(ICharacter &target);

		Ice &operator= (const Ice &rhs);

};

#endif
