#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void display(){
			cout<<"this is shape"<<endl;
		}
};
class Circle:public Shape{
	public:
	void display(){
		cout<<"shape is circle"<<endl;
	}
};
class Square:public Shape{
	public:
		void display(){
			cout<<"this is square"<<endl;
		}
};
int main(){
	Shape*s1;
	Circle c;
	s1=&c;
	s1->display();
	Square sq;
	s1=&sq;
	s1->display();
	return 0;
}
