#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string str = "Hello";
    cout << setw(10) << setfill('*') << str << endl;
    cout.width(15);
    cout.fill('#');
    cout.setf(ios::showpos);
    cout << 123 << endl;
    cout.unsetf(ios::showpos);
    cout.width(15);
    cout.fill('#');
    cout << str << endl;

    int n1 = 100, n2 = 1234;
    double number = 3.14159265358979323846;
    cout << "n3: " << number << setprecision(4) << number << endl;
    cout << "n1: " << n1 << hex << n1 << endl;
    cout << "n1: " << n1 << dec << n1 << endl;
    cout << "n2: " << n2;

    return 0;
}

