#include <iostream>
#include <string.h>
using namespace std;

class BankAccount{
    private:
        string ownerName;
        double balance;
    
    public:
        BankAccount(){
        ownerName = "Dikshant Dhanawade";
        balance = 10000;
        cout<<"Creating account for "<<ownerName<<" With initial Deposit "<<balance<<endl;
        }
        
        BankAccount(string name, double balance){
        ownerName = name;
        balance = balance;
        }
        
        void deposit(double amount){
            if(amount>0){
                balance=balance+amount;
                cout<<"Depositing  "<<amount<<" into "<<ownerName<<" Account"<<endl;
            }
            else
                cout<<"Invalid deposit amount"<<endl;
        }
        
        void withdraw(double amount){
            if(amount<balance){
                balance=balance-amount;
            }
            
            cout<<"Withdrawing  "<<amount<<" into "<<ownerName<<" Account"<<endl;
            
            if(amount>balance)
                cout<<"Insufficient Funds"<<endl;
        }
        
        void transfer(BankAccount &to, double amount){
            if(amount<balance){
                balance=balance-amount;
                to.balance = to.balance+amount;
                cout<<"Transferring "<<amount<<" from "<<ownerName<<" to "<<to.ownerName<<endl;
                cout<<"New balance of "<<ownerName<<": "<<balance<<endl;
                cout<<"New balance of "<<to.ownerName<<": "<<to.balance<<endl;
            }
            else
                cout<<"Insufficient Funds"<<endl;
        }
        
        void divideBalance(double divisor){
            
        }
};

int main() {
    BankAccount b1;
    BankAccount b2("Digu ", 10000);
    b1.deposit(2000);
    b1.withdraw(140000);
    b1.transfer(b2 ,400);

    return 0;
}
