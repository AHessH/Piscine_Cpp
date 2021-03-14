#include <iostream>
#include <string>
#include "iter.hpp"

#define SIZE 8

template<class T>
 void iter(T *arr, int lenght, void (*func)(T const &item)){
	for (int i = 0; i < lenght; i++)
		func(arr[i]);
}

template<class T>
 void print(T const &item){
	std::cout << item << " ";
}

int	main(void){
	std::string string_array[SIZE] = {"hello", "hello1", "hello2", "hello3", "hello4", "hello5", "hello6", "hello7"};
	int			int_array[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7};

	std::cout << "Print string array : ";
	iter(string_array, SIZE, &print);
	std::cout << std::endl;

	std::cout << "Print int array : ";
	iter(int_array, SIZE, &print);
	std::cout << std::endl;
	
	return (0);
}