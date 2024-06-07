//inside member function
#include<iostream>
using namespace std;
class EvenOdd{
	private:
	 int n;
	public:
		void read(){
			cout<<"enter value for n";
			cin>>n;
		}
		void check()
		{
			read();
			if(n%2==0)
			cout<<n<<"is even"<<endl;
			else
			cout<<n<<"is odd"<<endl;
		}
		void print(){
			cout<<"2nd object is assigned a value which is:"<<n;
		}
};
int main(){
	EvenOdd e1,e2;
	e2.n=5;
	e1.check();
	e2.read();
	return 0;
}
