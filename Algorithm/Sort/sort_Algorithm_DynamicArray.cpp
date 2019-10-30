
// Algorithms - Sort Descending Order
// sort.cpp

#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int NUM = 0; // size of array
	int* a = nullptr; 
	cout << "How many numbers you gonna enter: ";
	cin >> NUM;

	if (NUM > 0)
		a = new int(NUM); // creating dynamic array

	// to take values from user
	for (int i = 0; i < NUM; ++i) {
		cout << "value no. "<< i+1 << ": ";
			cin >> a[i];
	}

	cout << "\n=======by default Accending order========\n" << endl;

	sort(a, &a[NUM]); // accending order

	for (int i = 0; i < NUM; ++i) {
		cout << a[i] << endl;
	}

	cout << "\n=======Deccending order========\n" << endl;

	sort(a, &a[NUM], [](int i, int j) { return i < j; }); // deccending order
	
	for (int i = NUM-1; i >= 0; --i) {
		cout << a[i] << endl;
	}
	
}