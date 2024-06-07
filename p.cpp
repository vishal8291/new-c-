#include <iostream>
#include <string>
using namespace std;
string concatenate(const string& s1, const string& s2)
 {
    return s1 + s2;
}

int main(){
	string s1="ABCD";
	string s2="xyz";
	int s3=12345;
	cout<<s1.length()<<endl;
	cout<<s1.at(2)<<endl;
	s1.replace(1,2,s2);
	cout<<s1<<endl;
	s1.insert(2,s2);
	cout<<s1<<endl;
	cout<<s1.substr(1,2);
	cout<<s1.compare(s2)<<endl;
	char destination[5];
	s1.copy(destination,2,3);
	destination[2]='\0';
	cout<<destination<<endl;
	swap(s1,s2);
	cout<<"s1"<<s1<<"s2"<<s2<<endl;
	string concatenated = concatenate(s1,s2);
    cout << "Concatenated string: " << concatenated << endl;
	return 0;
}
