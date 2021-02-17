#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "In the constructor" << std::endl;
}

Pony::~Pony()
{
	std::cout << "In the destructor" << std::endl;
}

void Pony::print_hello()
{
	std::cout << "hello" << std::endl;
}
