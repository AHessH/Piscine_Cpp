#include <string>
#include <iostream>

int main(void)
{
	std::string hi = "HI THIS IS BRAIN";
	std::string &hi1 = hi;
	std::string *hi2 = &hi;

	std::cout << "string = " << hi << std::endl;
	std::cout << "reference = " << hi1 << std::endl;
	std::cout << "pointer = " << *hi2 << std::endl;

	return (0);
}