/* 
Name : Gitahi Jeff Makumi
Adm No : BSCIT-05-0137/2024
Date : 10/03/2024
Year 1 Sem 2
*/
#include<iostream>
using namespace std;

struct Bank{
    string name;
    int accountNo;
    float balance;
    string openingDate;
    int customerID;
};

int main() {
    Bank bank1 = {"Gitahi",101,20000,"10/03/2025",574894423};
    
    cout<<bank1.name<<endl;
    cout<<bank1.accountNo<<endl;
    cout<<bank1.balance<<endl;
    cout<<bank1.openingDate<<endl;
    cout<<bank1.customerID<<endl;
     
    return 0;
    
    }