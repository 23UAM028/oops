#include<iostream>
using namespace std;

class Bank {
public:
    void deposit(int amount) {
        cout << "Depositing " << amount << " in cash." << endl;
    }

    void deposit(float amount) {
        cout << "Depositing " << amount << " via digital payment." << endl;
    }

    void deposit(string upi_id, float amount) {
        cout << "Depositing " << amount << " using UPI (" << upi_id << ")." << endl;
    }
};

class Account {
private:
    int accnumber;
    float balance;

public:
    Account(int account_no, float initial_balance) {
        accnumber = account_no;
        balance = initial_balance;
    }

    void display() {
        cout << "Account " << accnumber << " Balance: " << balance << endl;
    }

    void operator+(Account &acc) {
        float transfer_amount;
        cout << "Transferring ";
        cin >> transfer_amount;

        if (balance >= transfer_amount) {
            balance -= transfer_amount;
            acc.balance += transfer_amount;
            cout << "Transferred " << transfer_amount << " successfully!" << endl;
        } else {
            cout << "Insufficient balance to transfer." << endl;
        }
    }

    void withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawing " << amount << " from Account " << accnumber << "." << endl;
            cout << "Remaining Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance for withdrawal." << endl;
        }
    }
};

int main() {
    Account acc1(1, 10000.0f);
    Account acc2(2, 5000.0f);

    Bank bank;
    bank.deposit(5000);              
    bank.deposit(1500);          
    bank.deposit("gpay@upi", 2500);  

    acc1.display();
    acc2.display();

    cout << "Transferring 3000 from Account 1 to Account 2..." << endl;
    acc1 + acc2;

    acc1.display();
    acc2.display();

    cout << "Withdrawing 2000 from Account 1..." << endl;
    acc1.withdraw(2000);

    acc1.display();

    return 0;
}

