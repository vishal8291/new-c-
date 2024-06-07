#include <iostream>
using namespace std;

class STUDENT {
    public:
        string name;
        int roll_no;
        float marks;
};

int main() {
    STUDENT s;
    s.name = "Vishal Tiwari";
    s.roll_no =3815;
    s.marks = 95.5;

    STUDENT *ptr = &s;
    cout << "Name: " << ptr->name << endl;
    cout << "Roll No: " << ptr->roll_no << endl;
    cout << "Marks: " << ptr->marks << endl;

    return 0;
}

