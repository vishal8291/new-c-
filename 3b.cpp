#include <iostream>
#include <string>
using namespace std;

// Structure to represent a Bank Employee
struct BankEmployee {
    string name;
    int accountNo;
    float balance;

    // Function to display employee details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }

    // Function to perform withdrawal
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful." << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Function to perform deposit
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of " << amount << " successful." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
};

int main() {
    // Create an object of the BankEmployee structure
    BankEmployee employee;

    // Set employee details
    employee.name = "Vishal Tiwari";
    employee.accountNo =3164774883;
    employee.balance = 50000.0;

    // Display employee details before transactions
    cout << "Employee details before transactions:" << endl;
    employee.displayDetails();
    cout << endl;

    // Perform withdrawal and display updated balance
    employee.withdraw(1000);
    cout << "Employee details after withdrawal:" << endl;
    employee.displayDetails();
    cout << endl;

    // Perform deposit and display updated balance
    employee.deposit(2000);
    cout << "Employee details after deposit:" << endl;
    employee.displayDetails();

    return 0;
}

