#include<iostream>
using namespace std;
class Base{
	public:
		void display(){
			cout<<"Base class display"<<endl;
		}
};
class Derived:public Base{
	public:
		void display(){
			cout<<"Derived class display"<<endl;
		}
};
int main()
{
	Base baseobj;
	Derived derivedobj;
	Base*ptr=&derivedobj;
	ptr->display();
	return 0;
}
