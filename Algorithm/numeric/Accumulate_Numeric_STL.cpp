// Algorithms - Accumulate
// accumulate.cpp

#include <iostream>
#include <numeric>

int main() {
	int a[] = { 3, 2, 4, 1 }, s;

	/*
	T accumulate(InputIterator f, InputIterator l, T init) 
	- accumulate the values in the range [f,l) to init and return the result
	*/
	s = std::accumulate(a, &a[4], (int)0);
	std::cout << "sum = " << s << std::endl;
	
	
	/*
	T accumulate(InputIterator f, InputIterator l, T init, Fn boper) 
	- accumulate the values in the range [f,l) to init using the binary operation boper 
	and return the result*/
	s = std::accumulate(a, &a[4], (int)0,
		[](int x, int y) { return x + 2 * y; });
	std::cout << "2 * sum = " << s << std::endl;

	/*
T accumulate(InputIterator f, InputIterator l, T init, Fn boper)
- accumulate the values in the range [f,l) to init using the binary operation boper
and return the result*/
	s = std::accumulate(a, &a[4], (int)48,
		[](int x, int y) { return x / y; });
	std::cout << "2 * sum = " << s << std::endl;
}