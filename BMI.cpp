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
      float height,weight;
      double BMI;
      
  // Prompt user for input
    cout<<"Enter your weight(in Kilograms):"<<endl;
    cin>>weight;
    
    cout<<"Enter your height(in Metres):"<<endl;
    cin>>height;
    
   //Calculation of BMI
    BMI = weight / (height * height);
    
   //BMI categorization
    if(BMI < 18.5){
        cout<<"Underweight."<<endl;
        }
        else if(BMI >= 18.5 && BMI <= 24.9){
            cout<<"Normal weight."<<endl;
            }
            else if(BMI >= 25 && BMI <= 29.9){
                cout<<"Overweight."<<endl;
                }
                else if(BMI >= 30){
                    cout<<"Obesity."<<endl;
                    }
    //Output displays
    cout<<"\nYour BMI is:"<<BMI<<endl;
    
    return 0;
    
    }