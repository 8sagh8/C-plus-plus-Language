#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Registration.h"
#include "Employee.h"
using namespace std;

int main() {
	string authName;
	cout << "================ WELCOME TO SCHOOL ================" << endl << endl;
	cout << "Enter username: ";
	cin >> authName;
	cout << endl;

	if (authName == "Sammar") {
		cout << "Select Options from below" << endl;
		cout << "1- Add Employee\n";
		cout << "2- List of Employees\n";
		cout << "3- Add Course\n";
		cout << "4- List of Courses\n";
		cout << "5- Add Student\n";
		cout << "6- List of Students\n";
		
		
		size_t main_ID;

		int optionN;
		cout << "\nPlease enter your choosen option No.: ";
		cin >> optionN;

		switch (optionN) {
		case 1:
			cout << "New Employee Registration Id is: ";
			cin >> main_ID;
			break;
		case 2:
			cout << "Maybe";
			break;
		case 3:
			cout << "No";
			break;
		case 4:
			cout << "Yes";
			break;
		case 5:
			cout << "Maybe";
			break;
		case 6:
			cout << "No";
			break;
		default:
			cout << "Invalid response";
		}

		imamhassan::Employee emp1 = main_ID;

		emp1.display();
	}

	else {
		cout << "You are not authorized!" << endl;
	}

	
	return 0;
}

