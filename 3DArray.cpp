/*
C ++ Program to show 3D Array
Author : Gitahi Jeff Makumi
Reg No : BSCIT-05-0137/2024
Date : 03/03/2025
*/
#include <iostream>
using namespace std;

int main() {
    int marks[2][2][3] = {
        {
            {60, 57, 65},
            {57, 76, 87}
        },
        {
            {60, 57, 65},
            {57, 76, 87}
        }
    };

    int i, j, k;

    for (i = 0; i < 2; i++) { 
        for (j = 0; j < 2; j++) { 
            for (k = 0; k < 3; k++) { 
                cout << marks[i][j][k] << "\t"; 
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}