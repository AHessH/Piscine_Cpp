#include "ScalarConv.hpp"

ScalarConv::ScalarConv(double num, int precision)
{
	_num = num;
	_precision = (precision > 1) ? precision : 1;
};


ScalarConv &ScalarConv::operator=(ScalarConv const &obj)
{
	_num = obj._num;
	_precision = obj._precision;
	return (*this);
}

void		ScalarConv::printInFormat(void) const
{
	std::cout << "char: ";
	printInChar();
	std::cout << std::endl;

	std::cout << "int: ";
	printInInt();
	std::cout << std::endl;

	std::cout << "float: ";
	printInFloat();
	std::cout << std::endl;

	std::cout.setf(std::ios::fixed);
	std::cout << "double: " << std::setprecision(_precision) << _num << std::endl;
}

void ScalarConv::printInChar(void) const
{
	if (_num == -INFINITY )
		std::cout << "impossible";
	else if (_num == INFINITY)
		std::cout << "impossible";
	else if (isnan(_num))
		std::cout << "impossible";
	else
	{
		if ((int)_num < 32 || (int)_num > 126)
			std::cout << "Non displayable!";
		else
			std::cout << "\'" << char(_num) << "\'";
	}
}

void ScalarConv::printInFloat(void) const
{
	if (_num == -INFINITY )
		std::cout << "-inff";
	else if (_num == INFINITY)
		std::cout << "inff";
	else if (isnan(_num))
		std::cout << "nanf";
	else
	{
		std::cout.setf(std::ios::fixed);
		std::cout << std::setprecision(_precision) << float(_num) << "f";
	}
}

void ScalarConv::printInInt(void) const
{
	if (_num == -INFINITY )
		std::cout << "impossible";
	else if (_num == INFINITY)
		std::cout << "impossible";
	else if (isnan(_num))
		std::cout << "impossible";
	else
		std::cout << int(_num);
}
