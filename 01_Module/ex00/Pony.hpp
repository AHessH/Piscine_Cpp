#ifndef __PONY_HPP
# define __PONY_HPP

#include <iostream>

class Pony
{
	private:
		bool	c_tail;
		int		c_legs;
		bool	c_head;
	public:
		Pony();
		~Pony();
		void print_hello();
		void ponyOnTheHeap();
		void ponyOnTheStack();
};

#endif
