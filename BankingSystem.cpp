#include <iostream>
#include <string>
#include <exception>
using namespace std;

class DivideByZeroException : public exception {
public:
    const char* what() {
        return "Error: Cannot divide by zero!";
    }
};

class BankAccount {
private:
    string ownerName;
    double balance;

public:
    BankAccount() {
        ownerName = "Dikshant Dhanawade";
        balance = 10000;
        cout << "Creating account for " << ownerName << " With initial Deposit " << balance << endl;
    }

    BankAccount(string name, double bal) {
        ownerName = name;
        balance = bal;
        cout << "Creating account for " << ownerName << " With initial Deposit " << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Depositing " << amount << " into " << ownerName << " Account" << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount" << endl;
        } else if (amount > balance) {
            cout << "Insufficient Funds" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawing " << amount << " from " << ownerName << " Account" << endl;
        }
    }

    void transfer(BankAccount& to, double amount) {
        if (amount <= 0) {
            cout << "Invalid transfer amount" << endl;
        } else if (amount > balance) {
            cout << "Insufficient Funds" << endl;
        } else {
            balance -= amount;
            to.balance += amount;
            cout << "Transferring " << amount << " from " << ownerName << " to " << to.ownerName << endl;
            cout << "New balance of " << ownerName << ": " << balance << endl;
            cout << "New balance of " << to.ownerName << ": " << to.balance << endl;
        }
    }

    void divideBalance(double divisor) {
        try {
            if (divisor == 0) {
                throw DivideByZeroException();
            }
            balance /= divisor;
            cout << "Balance after division: " << balance << endl;
        } catch (const DivideByZeroException& e) {
            cout << "Error:cannot divided by Zero!"<< endl;
        }
    }
};

int main() {
    BankAccount b1;
    BankAccount b2("Digu", 10000);

    b1.deposit(2000);
    b1.withdraw(140000);
    b1.transfer(b2, 400);

    cout << "Dividing Balance by 0" << endl;
    b1.divideBalance(0);

    return 0;
}

