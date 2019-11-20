// Element Addresses
// addresses.cpp

#include <iostream>

using namespace std;

int main() {
	char c = 'A C';
	cout << c << endl; // print value stored in "c"
	cout << (int*)& c << endl; // print address of "c"

	cout << "\n=================\n" << endl;

	char s[] = "A C string";
	
	cout << s << endl; // print all as it is

	cout << hex;
	for (int i = 0; s[i]; i++) {
		cout << (int*)& s[i] << " : " << s[i] << endl; // print address of memory and one character at a time
		cout << &s[i] << endl; // from starting character till end of string
		cout << &s << endl; // address of s
		cout << endl;
	}
	cout << "\n=================\n" << endl;

	

}