#include "Human.hpp"

Brain &Human::getBrain()
{
	return (this->brain);
}

Brain *Human::identify()
{
	return (&this->brain);
}
