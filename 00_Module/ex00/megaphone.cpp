#include <iostream>

int		main(int ac, char **av)
{

	if (ac != 1)
		for (int i = 1; i < ac ; i++)
			std::cout << av[i];
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}