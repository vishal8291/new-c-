#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    double n1, n2;
    cout << "Enter numerator: ";
    cin >> n1;
    cout << "Enter denominator: ";
    cin >> n2;
    try{
    	if(n2==0)
    	throw runtime_error("cannot divide by zero");
    	cout<<"Result:"<<n1/n2<<endl;
	}
	catch(const runtime_error& e){
		cout<<"exception caught:"<<e.what()<<endl;
		
	}
	return 0;
   }
