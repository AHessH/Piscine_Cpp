#include <iostream>
#include <fstream>
#include <string>

int		main(int ac, char **av)
{
	std::string buf;
	unsigned long int pos;

	if (ac != 4)
	{
		std::cout << "Wrong arguments count!" << std::endl;
		return (1);
	}
	std::ifstream i_file(av[1]);
	if (!(i_file.is_open()))
	{
		std::cout << av[1] << " not finded" << std::endl;
		return (1);
	}
	std::ofstream o_file((std::string(av[1]) + ".replace").c_str());
	if (!(i_file.is_open()))
	{
		std::cout << av[1] << ".replace " << "cannot create or open\n" << std::endl;
		return (1);
	}
	while (std::getline(i_file, buf))
	{
		while ((pos = buf.find(av[2])) != std::string::npos)
			buf.replace(pos, std::string(av[2]).length(), std::string(av[3]));
		o_file << buf << std::endl;
	}
	o_file.close();
	i_file.close();
	return (0);
}
