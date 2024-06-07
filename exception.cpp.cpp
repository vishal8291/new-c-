//catch,try,throw
#include <iostream>
#include <stdexcept> 
int main() 
{
	double n1,n2;
	cout<<"enter numerator";
	cin>>n1;
	cout<<"enter denominator:";
	cin>>n2;
	try{
		if(n2==0)
		throw runtime_error("cannot divide by zero");
		cout<<"result"<<n1/n2<<endl;
	}
	catch(const runtime_error& e)
	cout<<"exception caught:"<<e.what()<<endl;
    return 0;
}
//multiple catch block
#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    double n1, n2;
    cout << "Enter numerator: ";
    cin >> n1;
    cout << "Enter denominator: ";
    cin >> n2;

    try {
        if (n2 == 0)
            throw runtime_error("Cannot divide by zero");
        
        cout << "Result: " << n1 / n2 << endl;
    } 
    catch (const runtime_error& e) {
        cout << "Runtime error caught: " << e.what() << endl;
    }
    catch (...) {
        cout << "Unknown exception caught" << endl;
    }

    return 0;
}




#include <iostream>
#include <string> 
using namespace std;

int main()
{
    string s1 = "ABCD"; 
    string s2 = "xyz";
    char s3[5]; 

    cout << "Length of s1: " << s1.length() << endl;
    cout << "Character at index 2 in s1: " << s1.at(2) << endl;

    s1.replace(1, 2, s2);
    cout << "After replacing substring in s1: " << s1 << endl;

    s1.insert(2, s2);
    cout << "After inserting s2 into s1: " << s1 << endl;

    cout << "Substring of s1: " << s1.substr(1, 2) << endl;

    int comparison_result = s1.compare(s2);
    cout << "Comparison result between s1 and s2: " << comparison_result << endl;

    s1.copy(s3, 2, 1); 
    s3[2] = '\0';
    cout << "Copied substring to s3: " << s3 << endl;

    swap(s1, s2);
    cout << "After swapping s1 and s2:" << endl;
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;

    return 0;
}


