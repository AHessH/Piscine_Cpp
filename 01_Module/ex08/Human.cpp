#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "Melee atack to " << target << std::endl;
}
void Human::rangedAttack(std::string const & target)
{
	std::cout << "Ranged atack to " << target << std::endl;
}
void Human::intimidatingShout(std::string const & target)
{
	std::cout << "Intimidating shout to " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{

	std::string actions[] = {"melee", "ranged", "intimidating", "none"};
	void ((Human::*func[])(std::string const &)) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	int i;	

	for (i = 0; i < 4 && actions[i] != action_name; i++)
		;
	if (i < 4)
		(this->*func[i])(target);
}
