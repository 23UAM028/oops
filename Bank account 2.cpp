#include<iostream>
#include <string>
using namespace std;

class Bank {
    private:
        string accountHolder;
        int accountNumber;
        string accountType;
        double balance;

    public:
       
        Bank() {
            accountHolder = "dikshant dhanawade";
            accountNumber = 14102005;
            accountType = "savings";
            balance = 1000;
        }

      
        Bank(string aH, int aN, string aT, double b) {
            accountHolder = aH;
            accountNumber = aN;
            accountType = aT;
            balance = b;
        }

        
        void getAccountHolder() {
            cout << "Account Holder: " << accountHolder << endl;
        }

     
        void getAccountNumber() {
            cout << "Account Number: " << accountNumber << endl;
        }

        
        void getAccountType() {
            cout << "Account Type: " << accountType << endl;
        }

        
        void getBalance() {
            cout << "Balance: " << balance << endl;
        }

        
        void setAccountType(string x) {
            accountType = x;
            cout << "\nUpdated Account Type to: " << accountType << endl;
        }

        
        void setDeposit() {
            double damount;
            cout << "\nEnter amount to deposit: ";
            cin >> damount;
            balance += damount;
            cout << "Deposited: " << damount << endl;
            cout << "New balance is: " << balance << endl;
        }

      
        void setWithdrawl() {
            double wamount;
            cout << "\nEnter amount to withdraw: ";
            cin >> wamount;
            if (wamount <= balance) {
                balance -= wamount;
                cout << "Withdrawn: " << wamount << endl;
                cout << "New balance is: " << balance << endl;
            } else {
                cout << "Insufficient balance for withdrawal!" << endl;
            }
        }

        
        void getDisplayAccountDetails() {
            cout << "\nFinal Account Details: " << endl;
            getAccountHolder();
            getAccountNumber();
            getAccountType();
            getBalance();
        }

       
        ~Bank() {
            cout << "\nAccount for " << accountHolder << " is closed." << endl;
        }
};

int main() {
   
    Bank account1;

    
    account1.getDisplayAccountDetails();

   
    account1.setAccountType("current");

   
    account1.setDeposit();

    
    account1.setWithdrawl();

    account1.getDisplayAccountDetails();

    return 0;
}

