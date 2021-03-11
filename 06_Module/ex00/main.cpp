/* 
проверка на nan inf inff nanf
Если в конце строки есть f и в строке имеется '.'  то считается float,
Если в строке имеется '.' и только числа, то считается double
Если в конце строки имеются только числа, считается int
Если в конце строки имеется один символ и это не число, то char

генерировать исключение если это inf или nan для int и char
так же генерировать исключение для char если это не печатаемый тип

использовать как базовый тип double
*/

#include <iostream>
#include <string>
#include <limits>
int		main(void)
{
	double inf = std::numeric_limits<double>::infinity();
	float hello;


	try
	{
		hello = static_cast<float>(inf);
		std::cout << hello << std::endl;
	}
	catch(std::exception &except)
	{

	}
}
