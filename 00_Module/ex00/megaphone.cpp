#include <iostream>
#include <string>

std::string str_to_upper(char *in_str)
{
	std::string		str;

	while (*in_str)
	{
		str += ((*in_str >= 'a' && *in_str <= 'z') ? (*in_str - 32) : *in_str);
		in_str++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	if (ac != 1)
		for (int i = 1; i < ac ; i++)
			std::cout << str_to_upper(av[i]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}