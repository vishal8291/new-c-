#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    static int count; // Static member to keep track of object count

public:
    // Constructor
    Student(string studentName, int studentRollNo) {
        name = studentName;
        rollNo = studentRollNo;
        count++; // Increment count when an object is created
    }

    // Function to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }

    // Static member function to display object count
    static void showCount() {
        cout << "Number of Student objects created: " << count << endl;
    }
};

// Initializing static member count to zero
int Student::count = 0;

int main() {
    // Creating objects of Student
    Student student1("Vishal Tiwari",3815);
    Student student2("Anurag Pandey",3859);

    // Displaying student details
    student1.displayDetails();
    student2.displayDetails();

    // Displaying the count of Student objects
    Student::showCount();

    return 0;
}

