#ifndef __SQUAD_HPP
#define __SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include <iostream>
#include <string>

class Squad: public ISquad
{
	private:
		struct s_Squad
		{
			ISpaceMarine *obj;
			s_Squad *next;
		};
		s_Squad *_squad;
		unsigned int _count;

	public:
		Squad();
		Squad(Squad const &obj);
		~Squad();

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);
		
		Squad &operator=(Squad const &obj);
};

#endif
