#ifndef _IMAMHASSAN_EMPLOYEE_H__
#define _IMAMHASSAN_EMPLOYEE_H__
#include <iostream>
#include "Registration.h"

namespace imamhassan {
	class Employee : public Registration {
		int m_employeeID = 0;
		std::string m_position = "Temprory Staff";
	public:
		Employee() {
			m_employeeID = 0;
			m_position = "Temprory Staff";
		}
		Employee(size_t ID) {
			m_employeeID = ID;
		}

		void setPosition(std::string position) {
			m_position = position;
		}
		void setGender(std::string gender) {
			Registration::setGender(gender);
		}
		/*
		void setName(string name);
		void setAge(size_t age);
		void setReligion(string religion);
		void display() const;
		*/
		void display() const {
			std::cout << "issued id is: " << m_employeeID << std::endl;
		}
	};
}

#endif //_IMAMHASSAN_EMPLOYEE_H__