/*
C ++ Program to show 2D Array
Author : Gitahi Jeff Makumi
Reg No : BSCIT-05-0137/2024
Date : 03/03/2025
*/
#include <iostream>
using namespace std;

int main() {
    int marks[2][3] = {
        {4,6,7},
        {6,7,8} 
        
        };
        
        int i,j;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++)
            cout<<marks[i][j]<<"\t";
            }
            cout<<endl;
            
            return 0;
        
    }