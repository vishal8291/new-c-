#include<iostream>
using namespace std;

class Fibonacci {
    public:
        Fibonacci(int num) {
            int a = 0, b = 1, t, j;
            cout << "Enter the number: ";
            cin >> num;
            cout << "The Fibonacci series is: " << a << b;
            for(j = 1; j <= num; j++) {
                t = a + b;
                cout << t;
                a = b;
                b = t;
            }
            cout << "\n";
        }
};

int main() {
    Fibonacci obj(5);
}
