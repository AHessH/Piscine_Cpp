#ifndef __WHATEVER_HPP
#define __WHATEVER_HPP

template<class T>
inline T min(T a, T b) { return (a < b ? a : b);};

template<class T>
inline T max(T a, T b) { return (a > b ? a : b);};

template<class T>
void swap(T &a, T &b);

#endif
