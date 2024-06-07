#include <iostream>
#include <string>
using namespace std;

// Student class definition
class Student {
private:
    string name;
    int rollNo;

public:
    // Function to set student details
    void setDetails(string studentName, int studentRollNo) {
        name = studentName;
        rollNo = studentRollNo;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    // Create an object of the Student class
    Student student1;

    // Set student details using the setDetails function
    student1.setDetails("Vishal", 3815);

    // Display student details using the displayDetails function
    student1.displayDetails();

    return 0;
}

