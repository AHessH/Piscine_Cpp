#ifndef __SCAV_TRAP_HPP
#define __SCAV_TRAP_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include "ClapTrap.hpp"
#define MAX_ATACK 5

class ScavTrap: public ClapTrap
{
	private:
		void set_params();

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &robo);
		~ScavTrap();
		ScavTrap &operator=(ScavTrap const &robo);
	//actions func
		void rangedAttack(std::string const & target) const ;
		void meleeAttack(std::string const & target) const ;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(void) const;

};

#endif
