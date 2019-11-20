#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int r, c; // r = rows, c = column
	int** array; // points to row address

	cout << "Enter number of rows: ";
	cin >> r;

	cout << "Enter number of columns: ";
	cin >> c;

	//create dynamically allocated  memory Array 2D
	array = new int* [r]; // for rows

	for (int i = 0; i < r; ++i) { // for column in each row
		array[i] = new int[c];
	}

	// adding values in array 2d

	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			array[i][j] = (i + 1) * (j + 1);
		}
	}

	// time to print 
	cout << endl << endl;

	for (int i = 0; i < r; ++i) {
		cout << i;
		for (int j = 0; j < c; ++j) {
			cout << setw(5) << array[i][j];
		}
		cout << endl;
	}

	// time to deallocate memory
	for (int i = 0; i < r; ++i) {
		delete[] array[i]; // deallocate row 
		delete[] array; // deallocate pointers to rows
	}
}