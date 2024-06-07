/*#include <iostream>
using namespace std;

template <typename T>
class Maximum {
private:
    T num1, num2;
public:
    Maximum(T n1, T n2) : num1(n1), num2(n2) {}

    T getMax() {
        return (num1 > num2) ? num1 : num2;
    }
};

int main() {
    // Test with integers
    int n1 ,n2;
    cout<<"Enter a interger: "<<endl;
    cin>>n1;
	cin>>n2;
    Maximum<int> intMax(n1, n2);
    cout << "Maximum of "<<n1 <<" and "<<n2 <<" is: " << intMax.getMax() << endl;

    // Test with floating-point numbers
    double d1 ,d2;
      cout<<"Enter a double: "<<endl;
    cin>>d1;
	cin>>d2;
    Maximum<double> doubleMax(d1, d2);
     cout << "Maximum of "<<d1 <<" and "<<d2 <<" is: "<< doubleMax.getMax() << endl;

    // Test with characters
    char c1,c2;
    cout<<"Enter a char: "<<endl;
    cin>>c1;
	cin>>c2;
      
    Maximum<char> charMax(c1, c2);
     cout << "Maximum of "<<c1 << " and "<<c2<< " is: " << charMax.getMax() << endl;

    return 0;
}*/


#include <iostream>
using namespace std;

template <typename T>
class Maximum {
private:
    T num1, num2;
public:
    Maximum(T n1, T n2) : num1(n1), num2(n2) {}

    T getMax() {
        return (num1 > num2) ? num1 : num2;
    }
};

int main() {
    // Test with integers
    int n1, n2;
    cout << "Enter an integer: ";
    cin >> n1 >> n2;
    Maximum<int> intMax(n1, n2);
    cout << "Maximum of " << n1 << " and " << n2 << " is: " << intMax.getMax() << endl;

    // Test with floating-point numbers
    double d1, d2;
    cout << "Enter a double: ";
    cin >> d1 >> d2;
    Maximum<double> doubleMax(d1, d2);
    cout << "Maximum of " << d1 << " and " << d2 << " is: " << doubleMax.getMax() << endl;

    // Test with characters
    char c1, c2;
    cout << "Enter a character: ";
    cin >> c1 >> c2;
    Maximum<char> charMax(c1, c2);
    cout << "Maximum of '" << c1 << "' and '" << c2 << "' is: " << charMax.getMax() << endl;

    return 0;
}

