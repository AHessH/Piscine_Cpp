#include <iostream>
#include <list>

#include "easyfind.hpp"


int	main(void){
	std::list<int> lst;
	srand(time(0));
	int num;

	for (int i = 0; i < 20; i++)
		lst.push_back(i);
	for (int i = 0; i < 10; i++){
		num = random() % 40;
		if (easyfind(lst, num))
			std::cout << num << " is finded" << std::endl;
		else
			std::cout << num << " not finded" << std::endl;
	}
	return (0);
}