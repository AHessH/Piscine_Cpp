#ifndef __MUTANTSTACK_HPP
#define __MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <list>

template<class T>
 class MutantStack: public std::stack<T>{
	private:
		std::list<T>	_stack;
		unsigned int	_size;
	
	public:
		MutantStack() {_size = 0;};
		MutantStack(const MutantStack &obj){*this = obj;};
		~MutantStack(){};

		typedef typename std::list<T>::iterator iterator;
		class StackIsEmpty: public std::exception {
			virtual const char *what() const throw() {return ("StackIsEmpty");};
		};
		
		void			push(T n){
			++_size;
			_stack.push_front(n);
		};
		void			pop(void){
			if (!_size)
				throw StackIsEmpty();
			--_size;
			return (_stack.pop_front());
		};
		T				top(void) {return (_stack.front());};
		unsigned int	size(void) const {return (_size);};
		iterator		begin() {return (_stack.begin());};
		iterator		end() {return (_stack.end());};

		MutantStack		&operator=(const MutantStack &obj){
			_stack = obj._stack;
			_size = obj._size;
			return (*this);
		}

};


#endif
