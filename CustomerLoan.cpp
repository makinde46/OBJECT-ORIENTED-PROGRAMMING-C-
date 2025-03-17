/* 
Name : Gitahi Jeff Makumi
Adm No : BSCIT-05-0137/2024
Date : 17/03/2024
Year 1 Sem 2
*/
#include<iostream>
using namespace std;

int main() {

double income;
int age;

cout<<"Enter your age:"<<endl;
cin>>age;

cout<<"Enter your income:"<<endl;
cin>>income;

if(age >= 21 && income >= 21000){
	cout<<"Congratulations you qualify for a loan."<<endl;
}
else{
	cout<<"Unfortunately, we are unable to offer you a loan at this time ."<<endl;
}


     return 0;
}