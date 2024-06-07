/*#include <iostream>
#include <string>
#include<sstream>
using namespace std;
int main()
{
	string str_num="12345";
	int num;
	stringstream(str_num)>>num;
	cout<<"string to integer:"<<num<<endl;
	int int_num=54321;
	string str;
	stringstream()<<int_num<<str;
	stringstream ss;
	ss<<int_num;
	str=ss.str();
	cout<<"integer to string:"<<str<<endl;
	return 0;*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string str_num = "12345";
    int num;
    stringstream(str_num) >> num;
    cout << "string to integer: " << num << endl;

    int int_num = 54321;
    string str;
    stringstream() << int_num << str; // This line has an issue

    stringstream ss;
    ss << int_num;
    str = ss.str();
    cout << "integer to string: " << str << endl;

    return 0;
}

