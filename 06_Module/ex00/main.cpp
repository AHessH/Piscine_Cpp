#include "ScalarConv.hpp"
#include <ctype.h>

int		getPrecision(char *num)
{
	int precision = 0;
	int i = 0;
	while (num[i] && num[i] != '.')
		i++;
	i++;
	while (num[i] && isdigit(num[i]))
	{
		i++;
		precision++;
	}
	return (precision);
}

int		main(int av, char **ac)
{
	if (av == 2)
	{
		ScalarConv num(atof(ac[1]), getPrecision(ac[1]));
		num.printInFormat();
	}
	else
	{
		std::cout << "Not a valid argument count!" << std::endl;
	}
	return (0);
}
