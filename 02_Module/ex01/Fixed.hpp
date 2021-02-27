#ifndef __FIXED_HPP
# define __FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	private:
		int		c_fixed_poind_value;
		static const int c_fractional_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &);
		Fixed(int);
		Fixed(float);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &);
		float toFloat(void) const;
		int toInt(void) const;

};
std::ostream & operator<<(std::ostream &out, Fixed const &i);


#endif
