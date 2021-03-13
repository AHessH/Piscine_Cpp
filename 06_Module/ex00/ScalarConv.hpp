#ifndef __SCALAR_CONV_HPP
#define __SCALAR_CONV_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

class ScalarConv
{
	private:
		double	_num;
		int		_precision;
		void printInChar(void) const;
		void printInFloat(void) const;
		void printInInt(void) const;

	public:
		ScalarConv() {_num = 0.0;_precision = 1;};
		ScalarConv(double num, int precision);
		ScalarConv(ScalarConv const &obj) {*this = obj;};
		~ScalarConv() {};

		void		printInFormat(void) const;

		ScalarConv	&operator=(ScalarConv const &obj);

};

#endif
