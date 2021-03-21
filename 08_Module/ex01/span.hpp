#ifndef __SPAN_HPP
#define __SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>

class Span {
	private:
		std::vector<int>			_storage;
		unsigned int _size;
		unsigned int _count;
	public:
		Span();
		Span(unsigned int size);
		Span(const Span &obj);
		~Span();

		void addNumber(int num);
		void addNumber(int start, int stop);
		int  shortestSpan(void);
		int  longestSpan(void);

		Span &operator=(const Span &obj);

		class SpanCountIsTooLow: public std::exception {
			virtual const char *what() const throw() {return ("SpanCountIsTooLow");};
		};
		class SpanIsFull: public std::exception {
			virtual const char *what() const throw() {return ("SpanIsFull");};
		};
};


#endif
