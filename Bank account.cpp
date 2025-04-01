#include <iostream>
using namespace std;

struct Transaction {
    const char* type;
    double amount;
};

class BankAccount {
private:
    char accountHolder[50];
    double balance;
    Transaction transactions[100];
    int transactionCount;

public:
    BankAccount(const char* name, double initialBalance) {
        int i = 0;
        while (name[i] != '\0') {
            accountHolder[i] = name[i];
            i++;
        }
        accountHolder[i] = '\0';
        balance = initialBalance;
        transactionCount = 0;
    }

    void deposit(double amount) {
        balance += amount;
        Transaction t = {"Deposit", amount};
        transactions[transactionCount++] = t;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            Transaction t = {"Withdrawal", amount};
            transactions[transactionCount++] = t;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void printMiniStatement() {
        cout << "\n==============================\n";
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "==============================\n";
        cout << "Type        Amount\n";
        cout << "----------------------------\n";
        for (int i = 0; i < transactionCount; ++i) {
            cout << transactions[i].type << "    " << transactions[i].amount << endl;
        }
        cout << "==============================\n";
    }
};

int main() {
    char name[50];
    double initialBalance;

    cout << "Enter account holder's name: ";
    cin.getline(name, 50);
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(name, initialBalance);

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Print Mini Statement\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        double amount;
        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.printMiniStatement();
                break;
            case 4:
                cout << "Thank you for using our bank service!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

