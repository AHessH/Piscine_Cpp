#ifndef __ARRAY_HPP
#define __ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
 class Array{
	private:
		T *_array;
		unsigned int _size;

	public:
		Array(): _array(new T[0]), _size(0){};
		Array(unsigned int size): _array(new T[size]), _size(size){};
		Array(Array const &obj){*this = obj;};
		~Array(){delete [] _array;};

		unsigned int size(void) const {return (_size);};

		Array &operator=(Array const &obj){
			_size = obj.size();
			delete [] _array;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = obj._array[i];
			return (*this);
		};

		T& operator[](unsigned int index)
		{
			if (_size - 1 < index)
				throw ArrayIndexOutOfBoundsException();
			return (_array[index]);
		}

		class ArrayIndexOutOfBoundsException: public std::exception {
			virtual const char *what() const throw() {return ("Array Index Out Of Bounds Exception");};
		};
};

#endif
