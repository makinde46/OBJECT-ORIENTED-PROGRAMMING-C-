/* 
Name : Gitahi Jeff Makumi
Adm No : BSCIT-05-0137/2024
Date : 10/03/2024
Year 1 Sem 2
*/
#include<iostream>
using namespace std;

//Creating a Structure Patient
struct Patient{
    string name;
    int age;
    string diagnosis;
    };
//Creating a Function
void displayPatient(const Patient &p){
    cout<<"<Patient Name:"<<p.name<<endl;
    cout<<"Patient Age:"<<p.age<<endl;
    cout<<"Diagnosis:"<<p.diagnosis<<endl;
    
    }
//Creating the Main Function
int main() {
   Patient patient1 = {"Makumi",19,"Covid-19"};
   Patient patient2 = {"Jeff",20,"Malaria"};
   
   displayPatient(patient1);
   displayPatient(patient2);
   
    return 0;
    }