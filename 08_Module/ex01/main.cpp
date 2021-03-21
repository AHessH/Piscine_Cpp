#include "span.hpp"
#include <iostream>


int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(10000);
		try{
			sp.addNumber(1444, 1234353);
		} catch (std::exception &exept){
			std::cout << exept.what() << std::endl;
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(1);
		sp.addNumber(1);
		try{
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception &exept){
			std::cout << exept.what() << std::endl;
		}
	}
}