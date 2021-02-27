#include "Fixed.hpp"

Fixed::Fixed():c_fixed_poind_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &d)
{
	std::cout << "Copy constructor called" << std::endl;
	this->c_fixed_poind_value = d.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (c_fixed_poind_value);
}

void Fixed::setRawBits(int const raw)
{
	c_fixed_poind_value = raw;
}

Fixed &Fixed::operator=(Fixed &d)
{
	std::cout << "Assignation operator called" << std::endl;
	c_fixed_poind_value = d.getRawBits();
	return (*this);
}

