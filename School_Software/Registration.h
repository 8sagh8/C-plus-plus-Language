#ifndef _IMAMHASSAN_REGISTRATION_H__
#define _IMAMHASSAN_REGISTRATION_H__
#include <iostream>

namespace imamhassan {
	class Registration {
		std::string m_status = "";
		std::string m_name = "";
		std::string m_gender = "";
		size_t m_age = 0;
		std::string m_religion = "";
	public:
		Registration() {
			std::string m_status = "";
			std::string m_name = "";
			std::string m_gender = "";
			size_t m_age = 0;
			std::string m_religion = "";
		}
		void setGender(std::string gender) {
			m_gender = gender;
		}

		void setName(std::string name) {
			m_name = name;
		}
		void setAge(size_t age) {
			m_age = age;
		}
		void setReligion(std::string religion) {
			m_religion = religion;
		}
		void display() const {
			std::cout << "Name of the Employee is: " << m_name;
			std::cout << " , is a " << m_status << "." << std::endl;
			std::cout << "Employee age is: " << m_age << " & gender is " << m_gender;
			std::cout << " ,is a " << m_religion << " by faith." << std::endl << std::endl;
		}
	};
}

#endif //_IMAMHASSAN_REGISTRATION_H__