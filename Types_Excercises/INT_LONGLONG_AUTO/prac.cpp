#include <iostream>
#include <iomanip>
using namespace std;

template <typename T>
void newFanc(T number) {
	int i = 10;

	for (int i = 0; i < 10; ++i) {
		number *= 10;
		cout << "digit: " << setw(2) << right << i + 3 << ", and value in `number` is:  " << number << endl;
	}
}


int main() {

	cout << " ********** Welcome to Size Meter ********** " << endl << endl;

	cout << "\n==========INT============" << endl;
	int num = 10;
	newFanc(num);

	cout << "\n==========LONG LONG============" << endl;

	long long numb = 10;
	newFanc(numb);

	cout << "\n==========AUTO with 2 digits============" << endl;

	auto nu = 10; // here type taken by auto is "INT"
	newFanc(nu); // will display garbage value because type of nu is INT

	cout << "\n==========AUTO with 12 digit============" << endl;

	auto n = 100000000000; // here type taken by auto is "LONG LONG"
	n /= 10000000000;
	newFanc(n); // this won't produce garbage value because type of n is LONG LONG

}