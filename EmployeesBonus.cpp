/* 
Name : Gitahi Jeff Makumi
Adm No : BSCIT-05-0137/2024
Date : 17/03/2024
Year 1 Sem 2
*/
#include<iostream>
#include<cmath>
using namespace std;
//Creating the main fuction
int main() {
	
	double salary,bonus,netBonus;
	int yearsOfservice;
	
//Inputs salary
cout<<"Enter your salary:"<<endl;
cin>>salary;

//Input your years of service
cout<<"Enter your years of service:"<<endl;
cin>>yearsOfservice;

if(yearsOfservice > 10){
	bonus = 0.12;
}
	else if(yearsOfservice >= 6 && yearsOfservice <= 10){
	bonus = 0.10;
}
		else{
	bonus = 0.08;
}
//Calculation of netBonus
netBonus = salary * bonus;
//Displaying the netBonus
cout << "Your net bonus amount is: " << netBonus << endl;

	return 0;
}