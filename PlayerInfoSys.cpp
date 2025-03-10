/* 
Name : Gitahi Jeff Makumi
Adm No : BSCIT-05-0137/2024
Date : 10/03/2024
Year 1 Sem 2
*/
#include <iostream>
#include <string>
using namespace std;

//Creating a Structure Player
struct Player{
    string name;
    int score;
    int level;
    
    };
//Creating a Function
void displayPlayer(const Player &p){
    cout<<"Players Name:"<<p.name<<endl;
    cout<<"Score:"<<p.score<<endl;
    cout<<"Level:"<<p.level<<endl;
    
    }
//Creating the Main Function
int main() {
     
     Player player1,player2;
     
//Inputs & Outputs for Player1
    cout<<"Enter Player1 Name:"<<endl;
    cin>>player1.name;
    
    cout<<"Enter Player1 Score:"<< endl;
    cin>>player1.score;
    
    cout<<"Enter Player1 Level:"<<endl;
    cin>>player1.level;
    
//Inputs & Outputs for Player2 
    cout<<"Enter Player2 Name:"<<endl;
    cin>>player2.name;
    
    cout<<"Enter Player2 Score:"<<endl;
    cin>>player2.score;
 
    cout<<"Enter Player2 Level:"<<endl;
    cin>>player2.level; 
  
    
//Display Players Details
    cout<<"Players Information:\n";
    
    displayPlayer(player1);
    displayPlayer(player2);
    
    return 0;
    
    }