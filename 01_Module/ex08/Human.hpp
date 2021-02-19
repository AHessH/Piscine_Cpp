#ifndef __HUMAN_HPP
# define __HUMAN_HPP
#include <iostream>
#include <string>
#include <map>

class Human
{
	private:
		void meleeAttack(std::string const & target);
		void rangedAttack(std::string const & target);
		void intimidatingShout(std::string const & target);

	public:
		Human(){};
		void action(std::string const & action_name, std::string const & target);
};

#endif
