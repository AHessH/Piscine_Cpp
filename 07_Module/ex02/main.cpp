#include <iostream>
#include <string>

#include "Array.hpp"

int	main(void)
{
	Array<int> arr1 = Array<int>();
	Array<int> arr2 = Array<int>(5);
	Array<double> arr3 = Array<double>(5);
	Array<std::string> arr_str = Array<std::string>(10);

	arr1 = arr2;
	try{
		for (unsigned int i = 0; i < arr2.size() + 1; i++)
			arr2[i] = 10;
	}catch(std::exception &exception){
		std::cout << exception.what() << std::endl;
	}
	try{
		for (unsigned int i = 0; i < arr2.size() + 1; i++)
			std::cout << "i-" << i << " = " << arr2[i] << std::endl;
	}catch(std::exception &exception){
		std::cout << exception.what() << std::endl;
	}

	return (0);
}