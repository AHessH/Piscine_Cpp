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

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	c_fixed_poind_value = num << c_fractional_bits;
}

Fixed::Fixed(float num)
{
	std::cout << "Int constructor called" << std::endl;
	c_fixed_poind_value = roundf(num * (1 << c_fractional_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (c_fixed_poind_value);
}

void Fixed::setRawBits(int const raw)
{
	c_fixed_poind_value = raw;
}

Fixed &Fixed::operator=(const Fixed &d)
{
	std::cout << "Assignation operator called" << std::endl;
	c_fixed_poind_value = d.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream &out, Fixed const &i)
{
	out << i.toFloat();

	return (out);
}

float Fixed::toFloat(void) const
{
	float	dst;

	dst = (float)c_fixed_poind_value / (1 << c_fractional_bits);
	return (dst);
}

int Fixed::toInt(void) const
{
	int		dst;

	dst = c_fixed_poind_value / (1 << c_fractional_bits);
	return (dst);
}; 
