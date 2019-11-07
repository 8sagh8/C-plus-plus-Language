// Pointer Addition
// pointerAddition.cpp

#include <iostream>

using namespace std;

// 1. empty CLASS to check its size
class Student {};

// 2. empty STRUCT to check its size
struct Stu {};

// 3. CLASS with ONE MEMBER to check its size
class OneMember {
	int value = 10;
};

// 4. STRUCT with ONE MEMBER to check its size
struct OOneMember {
	int value = 10;
};

// 5. CLASS with TWO MEMBERS to check its size
class TwoMember {
	int value = 10;
	int value2 = 10;
};

// 6. STRUCT with TWO MEMBERS to check its size
struct TTwoMember {
	int value = 10;
	int value2 = 10;
};

// 7. STRUCT with MEMBER of type STRING to check its size
struct TString {
	string name = "Programmer";
};

// 8. STRING to check its size
string nName = "Programmer";

// 9. STRING to check its size
string nnName = "I am the only Programmer";

// 10. CONST CHAR[] to check its size; it keeps extra 1 byte
char newName[] = "I am the only Programmer";


int main() {
	cout << "sizeof INT ==> " << sizeof(int) << endl;
	cout << "sizeof CHAR ==> " << sizeof(char) << endl;
	cout << "sizeof STRING ==> " << sizeof(string) << endl;
	cout << "sizeof CLASS ==> " << sizeof(Student) << endl;
	cout << "sizeof STRUCT ==> " << sizeof(Stu) << endl;
	cout << "sizeof CLASS with One Member ==> " << sizeof(OneMember) << endl;
	cout << "sizeof STRUCT with One Member ==> " << sizeof(OOneMember) << endl;
	cout << "sizeof CLASS ==> " << sizeof(TwoMember) << endl;
	cout << "sizeof STRUCT with One Member ==> " << sizeof(TTwoMember) << endl;
	cout << "====================" << endl;

	cout << "sizeof STRUCT with string ==> " << sizeof(TString) << endl;
	cout << "sizeof nName ==> " << sizeof(nName) << endl;
	cout << "sizeof nnName ==> " << sizeof(nnName) << endl;


	cout << "sizeof nnName ==> " << sizeof(newName) << endl;

}