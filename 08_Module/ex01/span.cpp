#include "span.hpp"

Span::Span(){
	_size = 0;
	_count = 0;
	_storage = std::vector<int> (0);
}

Span::Span(unsigned int size){
	_size = size;
	_count = 0;
	_storage = std::vector<int> (_size);

}

Span::Span(const Span &obj){
	*this = obj;
}

Span::~Span(){
}


void Span::addNumber(int num){
	_storage[_count] = num;
	_count++;
}

void Span::addNumber(int start, int stop){
	if (_count == _size)
		throw SpanIsFull();
	for (int i = 0; start <= stop && _count < _size; start++) {
		_storage[i] = start;
		_count++;
		i++;
	}
}

int  Span::shortestSpan(void){
	int		diff = INT_MAX;
	if (_count <= 1)
		throw SpanCountIsTooLow();

	std::sort(_storage.begin(), _storage.end());
	std::vector<int>::iterator j = _storage.begin() + 1;
	for (std::vector<int>::iterator i = _storage.begin(); j < _storage.end(); i++, j++)
		diff = std::min(diff, *j - *i);
	return (diff);
}

int  Span::longestSpan(void){
	if (_count <= 1)
		throw SpanCountIsTooLow();
	return (*std::max_element(_storage.begin(), _storage.end()) - *std::min_element(_storage.begin(), _storage.end()));
}


Span &Span::operator=(const Span &obj){
	_size = obj._size;
	for (unsigned int i = 0; i < _size; i++)
		_storage[i] = obj._storage[i];
	return (*this);
}
