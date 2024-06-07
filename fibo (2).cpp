/*#include <iostream>
using namespace std;
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the number of terms";
    cin >> n;
    cout << "fibonacci series:";
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << "t1<<", ";
                continue;
         }

        if (i == 2)
        {
            cout << "t2<<", ";
                continue;

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << "nextTerm<<", ";
            return 0;
    }
}
*/
/*#include <iostream>
using namespace std;
class Distance
{
private:
    int meter;
    // declare the friend function
    friend int addFive(Distance);

public:
    Distance() : meter(0) {}
};
// define the friend function
int addFive(Distance d)
{
    d.meter += 5;
    return d.meter;
}
int main()
{
    Distance d;
    cout << "Distance:" << addFive(d);
    return 0;
}*/
/*#include <iostream>
using namespace std;

class Wall {
private:
    double length;
    double height;

public:
    Wall(double len, double hgt) {
        length = len;
        height = hgt;
    }

    double calculateArea() {
        return length * height;
    }
};

int main() {
    Wall wall1(10.5, 8.6);
    Wall wall2(8.5, 6.3);
    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea();
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int n, num, digit, rev = 0;
    cout << "enter the number:";
    cin >> num;
    n = num;
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);
    cout << "the reverse of the number is" << rev << endl;
    if (num == rev)
        cout << "the number is palindrome";
    else
        cout << "the number is not palindrome";
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    bool is_raining = false;
    bool has_umbrella = true;
    if (is_raining && !has_umbrella)
    {
        cout << "take an umbrella" << endl;
    }
    else
    {
        cout << "no need for umbrella" << endl;
        return 0;
    }
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int factorial(int n)
    {
        if(n==0)
        {
            return 1;
        }
        else
        {
            return n*factorial(n-1);
            
        }
        return 0;
    }
}
*/

/*#include<iostream>
using namespace std;
class Distance{
    private:
    int meter;
    //declare the friend function
    friend int addFive(Distance);
    public:
    Distance():meter(0){}
};
//define the friend function
int addFive(Distance d)
{
    d.meter+=5;
    return d.meter;
}
int main()
{
    Distance d;
    cout<<"Distance:"<<addFive(d);
    return 0;
}*/

/*#include<iostream>
using namespace std;
class Wall
{
    double length;
    double height;
    public:
    wall(double len,double hgt)
    {
        length=len;
        height=hgt;
    }
    //copy constructor
    Wall(Wall&obj)
    {
        length=obj.length;
        height=obj.height;
    }
    double calculateArea()
    {
        return length*height
    }
};
int main()
{
    Wall wall1(10.8,2.4)
    wall wall2=w1;
    cout<<"Area of wall1"Wall1.calculateArea()<<endl;
    cout<<"Area of wall2"Wall2.calculateArea()<<endl;
    return 0;
}*/

#include <iostream>
using namespace std;

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) : value(val) {}
    MyNumber operator-(const MyNumber& other) const {
        return MyNumber(value - other.value);
    }
    friend ostream& operator<<(ostream& os, const MyNumber& num) {
        os << num.value;
        return os;
    }
};

int main() {
    MyNumber num1(42);
    MyNumber num2(10);

    MyNumber difference = num1 - num2;

    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    cout << "Difference: " << difference << endl;

    return 0;
}





#include <iostream>
#include <string> // Include this header for using string data type
using namespace std;
int main()
{
    string s1 = "ABCD"; // Use std::string for string variables
    string s2 = "xyz";
    string s3; // Declare s3 for copying

    // Length of s1
    cout << "Length of s1: " << s1.length() << std::endl;

    // Character at index 2 in s1
    cout << "Character at index 2 in s1: " << s1.at(2) << std::endl;

    // Replace substring in s1
    s1.replace(1, 2, s2);
    cout << "After replacing substring in s1: " << s1 << std::endl;

    // Insert s2 into s1
    s1.insert(2, s2);
    cout << "After inserting s2 into s1: " << s1 << std::endl;

    // Substring of s1 (from index 1, length 2)
    cout << "Substring of s1: " << s1.substr(1, 2) << std::endl;

    // Comparison between s1 and s2
    int comparison_result = s1.compare(s2);
    cout << "Comparison result between s1 and s2: " << comparison_result << std::endl;

    // Copy substring from s1 to s3
    s1.copy(s3, 1, 3);
    s3[1] = '\0'; // Null-terminate the copied string
    cout << "Copied substring to s3: " << s3 << std::endl;

    // Swap s1 and s2
    swap(s1, s2);
    cout << "After swapping s1 and s2:" << std::endl;
    cout << "s1: " << s1 << std::endl;
    cout << "s2: " << s2 << std::endl;

    return 