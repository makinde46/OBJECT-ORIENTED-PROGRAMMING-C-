/* 
Name : Gitahi Jeff Makumi
Adm No : BSCIT-05-0137/2024
Date : 17/03/2024
Year 1 Sem 2
*/
#include<iostream>
using namespace std;

//Creating the main function
int main() {
	
	int bookID,daysOverdue;
	int dueDate,returnDate;
	float fineAmount = 0,fineRate = 0;
	
//Prompt user for inputs	
cout<<"Enter bookID:"<<endl;
cin>>bookID;

cout<<"Enter dueDate:"<<endl;
cin>>dueDate;

cout<<"Enter returnDate:"<<endl;
cin>> returnDate;

//Calculating the daysOverdue
daysOverdue = returnDate - dueDate;

if(daysOverdue > 0){
  if (daysOverdue > 0 && daysOverdue <= 7) {
        fineRate = 20;
    }
    else if (daysOverdue >= 8 && daysOverdue <= 14) {
        fineRate = 50;
    }
    else if (daysOverdue >= 15) {
        fineRate = 100;
    }
    fineAmount = daysOverdue * fineRate;
}
else{
    daysOverdue = 0;
    fineRate = 0;
    }
    
//Display outputs  
    cout<<"\nBook ID:"<<bookID<<endl;
    cout<<"Due Date:"<<dueDate<<endl;
    cout<<"Return Date:"<<returnDate<<endl;
    cout<<"Days Overdue:"<<daysOverdue<<endl;
    cout<<"Fine Rate:"<<fineRate<<" per day"<<endl;
    cout<<"Fine Amount:"<<fineAmount<<endl;

	
	return 0;
	
}