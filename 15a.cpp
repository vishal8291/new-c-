/*#include <iostream>
using namespace std;
template <typename T>
class Calculator {
public:
    T add(T num1, T num2) {
        return num1 + num2;
    }

    T subtract(T num1, T num2) {
        return num1 - num2;
    }

    T multiply(T num1, T num2) {
        return num1 * num2;
    }

    T divide(T num1, T num2) {
        // Check for division by zero
        if (num2 == 0) {
            throw runtime_error("Division by zero!");
        }
        return num1 / num2;
    }
};

int main() {
    // Get user input for data type (optional)
    char choice;
    cout << "Enter data type (i for integer, d for double): ";
    cin >> choice;

    int intNum1, intNum2;
    double doubleNum1, doubleNum2;

    if (choice == 'i') {
        cout << "Enter two integers: ";
        cin >> intNum1 >> intNum2;
        Calculator<int> intCalc;

        cout << "Addition: " << intCalc.add(intNum1, intNum2) << endl;
        cout << "Subtraction: " << intCalc.subtract(intNum1, intNum2) << endl;
        cout << "Multiplication: " << intCalc.multiply(intNum1, intNum2) << endl;
        cout << "Division: " << intCalc.divide(intNum1, intNum2) << endl;
    } else if (choice == 'd') {
        cout << "Enter two doubles: ";
        cin >> doubleNum1 >> doubleNum2;
        Calculator<double> doubleCalc;

        cout << "Addition: " << doubleCalc.add(doubleNum1, doubleNum2) << endl;
        cout << "Subtraction: " << doubleCalc.subtract(doubleNum1, doubleNum2) << endl;
        cout << "Multiplication: " << doubleCalc.multiply(doubleNum1, doubleNum2) << endl;
        cout << "Division: " << doubleCalc.divide(doubleNum1, doubleNum2) << endl;
    } else {
        cerr << "Invalid choice." << endl;
        return 1;
    }

    return 0;
}*/

#include <iostream>
#include <stdexcept> // Include this header for runtime_error
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T num1, T num2) {
        return num1 + num2;
    }

    T subtract(T num1, T num2) {
        return num1 - num2;
    }

    T multiply(T num1, T num2) {
        return num1 * num2;
    }

    T divide(T num1, T num2) {
        // Check for division by zero
        if (num2 == 0) {
            throw runtime_error("Division by zero!");
        }
        return num1 / num2;
    }
};

int main() {
    // Get user input for data type (optional)
    char choice;
    cout << "Enter data type (i for integer, d for double): ";
    cin >> choice;

    if (choice == 'i') {
        int intNum1, intNum2;
        cout << "Enter two integers: ";
        cin >> intNum1 >> intNum2;
        Calculator<int> intCalc;

        cout << "Addition: " << intCalc.add(intNum1, intNum2) << endl;
        cout << "Subtraction: " << intCalc.subtract(intNum1, intNum2) << endl;
        cout << "Multiplication: " << intCalc.multiply(intNum1, intNum2) << endl;
        cout << "Division: " << intCalc.divide(intNum1, intNum2) << endl;
    } else if (choice == 'd') {
        double doubleNum1, doubleNum2;
        cout << "Enter two doubles: ";
        cin >> doubleNum1 >> doubleNum2;
        Calculator<double> doubleCalc;

        cout << "Addition: " << doubleCalc.add(doubleNum1, doubleNum2) << endl;
        cout << "Subtraction: " << doubleCalc.subtract(doubleNum1, doubleNum2) << endl;
        cout << "Multiplication: " << doubleCalc.multiply(doubleNum1, doubleNum2) << endl;
        cout << "Division: " << doubleCalc.divide(doubleNum1, doubleNum2) << endl;
    } else {
        cerr << "Invalid choice." << endl;
        return 1;
    }

    return 0;
}

