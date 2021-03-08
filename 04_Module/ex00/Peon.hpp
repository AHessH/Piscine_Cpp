#ifndef __PEON_HPP
#define __PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon();
		Peon(std::string name);
		Peon(Peon const &obj);
		~Peon();
		
		Peon &operator=(Peon const &obj);
		void getPolymorphed() const;

};

std::ostream &operator<<(std::ostream &out, Peon const &obj);

#endif
