#ifndef __TACTICAL_MARINE_HPP
#define __TACTICAL_MARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine: public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const &obj);
		~TacticalMarine();

		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;

		TacticalMarine &operator=(TacticalMarine const &obj);

};

#endif
