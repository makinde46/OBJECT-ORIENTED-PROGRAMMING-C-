/*
C++ Program For Class Employee
Author : Gitahi Jeff Makumi
Reg No : BSCIT-05-0137/2024
Date : 9/02/2025
*/

#include <iostream>
using namespace std;

class Employee {
	private:
		string name;
		int salary;
		
		public:
		void setData (string n) {
			name = n;
		}	
		
		string getData () {
			return name;
		}
		
		void setSalary (int s) {
			salary = s;
		}
		
		int getSalary () {
			return salary;
		}
};

int main () {
	Employee e_1;
	
	e_1.setData ("Zee");
	cout<<"Name is " <<e_1.getData() <<endl;
	
	e_1.setSalary (109446);
	cout<<"Salary is " <<e_1.getSalary() <<endl;
	return 0;
}