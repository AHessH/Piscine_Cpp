#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony pony {};

	pony.print_hello();
}

void	ponyOnTheHeap()
{
	Pony *pony = new Pony();

	pony->print_hello();
	delete pony;
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}