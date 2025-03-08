/* 
Name : Gitahi Jeff Makumi
Adm No : BSCIT-05-0137/2024
Date : 01/03/2024
Year 1 Sem 2
*/
#include<iostream>
#include<string>
using namespace std;

class AccountHolder{
    protected:
    string name;
    public:
    void setName(string g){
        name = g;
        }
    string getName(){
        return name;
        }
    };
    
class BankAccount:public AccountHolder{
     private:
     int accountNumber;
     double balance;
     
     public:
     BankAccount(string g,int number,double bal){
         setName(g);
         accountNumber = number;
         balance = bal;
     }
         int getAccountNumber(){
             return accountNumber;
             }
         double getBalance(){
             return balance;
             }
             
         void deposit(double amount) {
        balance += amount;
            }
            
         bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!!" << endl;
            return false;
        }
        balance -= amount;
        return true;
    }
    };
    
class SavingsAccount:public BankAccount{
     private:
     double interestRate;
     
     public:
     SavingsAccount(string g,int accNo,double bal,double rate)
      : BankAccount(g, accNo, bal), interestRate(rate) {}
      double getInterestRate() {
        return interestRate;
    }

    void addInterest() {
        double interest = (getBalance() * interestRate) / 100;
        deposit(interest);
    }
};

int main() {
    SavingsAccount sa("Gitahi", 46, 6700, 2.9);

    cout << "Account Holder: " << sa.getName() << endl;
    cout << "Account Number: " << sa.getAccountNumber() << endl;
    cout << "Balance: $" << sa.getBalance() << endl;
    cout << "Interest Rate: " << sa.getInterestRate() << "%" << endl;

    sa.deposit(4500);
    cout << "Balance after deposit: $" << sa.getBalance() << endl;

    sa.withdraw(30000);
    cout << "Balance after withdrawal: $" << sa.getBalance() << endl;

    sa.addInterest();
    cout << "Balance after adding interest: $" << sa.getBalance() << endl;

    return 0;
}