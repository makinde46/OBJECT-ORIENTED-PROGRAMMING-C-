/* 
Name : Gitahi Jeff Makumi
Adm No : BSCIT-05-0137/2024
Date : 10/03/2024
Year 1 Sem 2
*/
#include<iostream>
using namespace std;

struct Student{
    string name;
    int DOB;
    string email;
    float GPA;
    
    };
    int main(){
        Student student1 = {"Gitahi",2015,"makindejeff46@gmail.com",5.0};
        Student student2 = {"Jeff",2024,"makindejeff46@gmail.com",4.5};
        cout<<student1.name<<endl;
        cout<<student1.DOB<<endl;
        cout<<student1.email<<endl;
        cout<<student1.GPA<<endl;
        cout<<student2.name<<endl;
        cout<<student2.DOB<<endl;
        cout<<student2.email<<endl;
        cout<<student2.GPA<<endl;
        
        return 0;
        
        }