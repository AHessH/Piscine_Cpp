#ifndef __NINJA_TRAP_HPP
#define __NINJA_TRAP_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define MAX_ATACK 5

class NinjaTrap: public ClapTrap
{
	private:
		void set_params();

	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &robo);
		~NinjaTrap();
		NinjaTrap &operator=(NinjaTrap const &robo);
	//actions func
		void rangedAttack(std::string const & target) const ;
		void meleeAttack(std::string const & target) const ;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void ninjaShoebox(NinjaTrap const & trap);
		void ninjaShoebox(ClapTrap const & trap);
		void ninjaShoebox(FragTrap const & trap);
		void ninjaShoebox(ScavTrap const & trap);
};

#endif
