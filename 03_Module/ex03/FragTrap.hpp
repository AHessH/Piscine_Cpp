#ifndef __FRAG_TRAP_HPP
#define __FRAG_TRAP_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include "ClapTrap.hpp"
#define MAX_ATACK 5

typedef struct	s_random_atack
{
	std::string atack_name;
	unsigned int atack_damage;
}				t_random_atack;

class FragTrap: public ClapTrap
{
	private:
		void set_params();

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &robo);
		~FragTrap();
		FragTrap &operator=(FragTrap const &robo);
	//actions func
		void rangedAttack(std::string const & target) const ;
		void meleeAttack(std::string const & target) const ;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
};

#endif
