/* 
Name : Gitahi Jeff Makumi
Adm No : BSCIT-05-0137/2024
Date : 01/03/2024
Year 1 Sem 2
*/
#include<iostream>
#include<string>
using namespace std;

class Person{
    protected:
    string name;
    
    public:
    void setName(string n){
       name = n;
        }
       
       string getName(){
        return name;
        }
// Constructor   
        Person(string n){
            name = n;
            }
    };
    
class LibraryMember:public Person{
    private:
    
    int memberID;
    int booksBorrowed;
    
    public:
    // Constructor initializing name, memberID, and booksBorrowed
    LibraryMember(string n, int id, int books) : Person(n) {
        memberID = id;
        booksBorrowed = books;
    }
    
    int getMemberID(){
        return memberID;
        }
     int getBooksBorrowed(){
         return booksBorrowed;
         } 
      };
class PremiumMember:public LibraryMember{
    private:
    
    double membershipFee;
    
    public:
    // Constructor initializing name, memberID, booksBorrowed, and membershipFee
    PremiumMember(string n, int id, int books, double fee) : LibraryMember(n, id, books) {
        membershipFee = fee;
    }
    
    double getMembershipFee(){
        return membershipFee;
        }
    };
    
    int main(){
        PremiumMember pm("Gitahi",488,3,40);
        
        cout<<"Name:"<< pm.getName() << endl;
        cout<<"Member ID:"<< pm.getMemberID() << endl;
        cout<<"Books:"<< pm.getBooksBorrowed()<< endl;
        cout<<"MembershipFee:$"<< pm.getMembershipFee()<< endl;
        
        return 0;
        }