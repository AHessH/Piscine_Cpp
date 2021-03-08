#ifndef __ASSAULT_TERMINATOR_HPP
#define __ASSAULT_TERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator: public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &obj);
		~AssaultTerminator();

		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;

		AssaultTerminator &operator=(AssaultTerminator const &obj);

};

#endif
