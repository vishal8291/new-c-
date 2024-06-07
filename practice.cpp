#include<iostream>
using namespace std;
int main(){
	int n,num,digit,rev=0;
	cout<<"enter an number:";
	cin>>num;
	n=num;
	do{
	digit=num%10;
	rev=(rev*10)+digit;
	num=num%10;
	}
	while(num!=0);
	cout<<"the reverse of the number is:"<<rev<<endl;
	if(num==rev)
	cout<<"the no is palindrome:";
	else
	cout<<"the no is not palindrome";
	return 0;
}
