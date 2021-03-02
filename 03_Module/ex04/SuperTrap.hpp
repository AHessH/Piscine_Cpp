#ifndef __SUPER_TRAP_HPP
#define __SUPER_TRAP_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
	private:
		void set_params();

	public:
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &robo);
		~SuperTrap();
		SuperTrap &operator=(SuperTrap const &robo);
	//actions func
		void rangedAttack(std::string const & target) const ;
		void meleeAttack(std::string const & target) const ;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif