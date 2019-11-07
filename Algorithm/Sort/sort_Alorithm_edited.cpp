// Algorithms - Sort Descending Order
// sort.cpp

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// we have an array but don't know its size
	int a[] = { 3, 2, 4, 1, 10, 0, -5, 6, 19 };

	// calculating size of an array
	int b = sizeof(a) / sizeof(int); 



	cout << "*******Descending Order*************" << endl << endl;

	std::sort(a, &a[b], [](int i, int j) { return i > j; });
	for (int i : a)
		std::cout << i << std::endl;

	cout << "*******Ascending Order*************" << endl << endl;
	// don't need lambda.... by just this we can get ascending order
	sort(a, &a[b]);

	for (int i : a)
		cout << i << endl;

	cout << "=================" << endl << endl;

	cout << "If we write own function to get descending order" << endl << endl;

	int i = 0;

	while (i < (sizeof(a) / sizeof(int))) {
		for (int j = i + 1; j < (sizeof(a) / sizeof(int)); ++j) {
			if (a[i] < a[j]) {
				int k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
		++i;
	}

	i = 0;

	while (i < (sizeof(a) / sizeof(int))) {

		cout << a[i] << endl;
		++i;
	}
}