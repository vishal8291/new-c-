#include <iostream>
#include <string> // Include this header for string usage

using namespace std;

class Person {
private: // Changed 'public' to 'private' for encapsulation
    int age;
    string name;

public:
    void setDetails() {
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
    }

    void getDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
public:
    int id;
    int salary;

    void setEmpDetails() {
        cout << "Enter the Id: ";
        cin >> id;
        cout << "Enter the Salary: ";
        cin >> salary;
    }

    void getEmpDetails() {
        cout << "Id: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
private: // Added 'private' for encapsulation
    int allowance;

public:
    void setData() {
        cout << "Enter the Allowance: ";
        cin >> allowance;
    }

    void getAllowance() {
        cout << "\nDetails:" << endl;
        getDetails();
        getEmpDetails();
        cout << "Allowance: " << allowance << endl;
        cout << "Total Salary: " << salary + allowance << endl;
    }
};

int main() {
    Manager E1;
    E1.setDetails();
    E1.setEmpDetails();
    E1.setData();
    E1.getAllowance();

    return 0;
}

