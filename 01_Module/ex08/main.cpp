#include "Human.hpp"

int		main(void)
{
	Human human = Human();

	human.action("melee", "Viktor");
	human.action("ranged", "Viktor");
	human.action("intimidating", "Viktor");

	return (0);
}