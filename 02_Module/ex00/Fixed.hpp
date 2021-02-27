#ifndef __FIXED_HPP
# define __FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int		c_fixed_poind_value;
		static const int c_fractional_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(Fixed &);
};


#endif
