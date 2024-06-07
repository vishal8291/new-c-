#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Prime numbers between 1 and " << n << " are: ";
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i))
            cout << i << " ";
    }

    return 0;
}

