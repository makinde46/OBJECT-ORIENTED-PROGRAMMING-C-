/*
C ++ Program to show Inheritance
Author : Gitahi Jeff Makumi
Reg No : BSCIT-05-0137/2024
Date : 28/02/2025
*/

#include<iostream>
using namespace std;

class Animal {
    public:
    
    void Eat () {
        cout<<"I Can Eat!" <<endl;
    }
    
    void Sleep () {
        cout<<"I Can Sleep!" <<endl;
    }
};

class Dog : public Animal {
    public:
    void Bark () {
        cout<<"I Can Bark!" <<endl;
    }
};

int main () {
    Dog dog1;
    
    dog1.Eat() ;
    dog1.Sleep() ;
    dog1.Bark() ;
    
    return 0;
}