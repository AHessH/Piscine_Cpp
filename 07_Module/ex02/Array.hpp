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
		Array(){
			_size = 0;
			_array = new T[_size];
		};
		Array(unsigned int size){
			_size = size;
			_array = new T[_size];
		};
		Array(Array const &obj){*this = obj;};
		~Array(){delete [] _array;};

		int size(void) const {return (_size);};

		T &operator=(Array const &obj){
			*this->_size = obj.size();
			*this->_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++){
				*this->_array[i] = obj._array[i];
			}
			return (*this);
		};
		T& operator[](unsigned int index)
		{
			if (_size - 1 < index)
				throw ArrayIndexOutOfBoundsException();
			else
				return (_array[index]);
			return NULL;
		}

		class ArrayIndexOutOfBoundsException: public std::exception {
			virtual const char *what() const throw() {return ("Array Index Out Of Bounds Exception");};
		};
};

#endif
