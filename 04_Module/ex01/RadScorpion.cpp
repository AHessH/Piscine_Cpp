#include "RadScorpion.hpp"

RadScorpion::RadScorpion(RadScorpion const &obj): Enemy(obj)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
