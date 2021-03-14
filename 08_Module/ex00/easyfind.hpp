#ifndef __EASYFIND_HPP
#define __EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
template <class T>
 bool easyfind(T item, int value)
{
	typename T::const_iterator it;

	it = find(item.begin(), item.end(), value);
	if (it == item.end())
		return (false);
	return (true);
}

#endif
