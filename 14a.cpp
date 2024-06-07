#include <iostream>
#include <stdexcept> // Include the <stdexcept> header for runtime_error
using namespace std;

int main() {
    double n1, n2;

    cout << "Enter numerator: ";
    cin >> n1;
    cout << "Enter denominator: ";
    cin >> n2;

    try {
        if (n2 == 0)
            throw runtime_error("Cannot divide by 0"); // Throw a runtime_error exception

        cout << "Result: " << n1 / n2 << endl;
    } catch (const runtime_error &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

