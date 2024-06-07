#include<iostream>
using namespace std;
class student
{
	private:
	char name[30];
	int rollno;
	public:
		void getdata(void);
		void display(void);
};
void student::getdata(void)
{
	cout<<"enter name";
	cin>>name;
	cout<<"enter rollno";
	cin>>rollno;
}
void student::display(void)
{
	cout<<"name"<<name<<"\n";
	cout<<"rollno"<<rollno<<"\n";
}
int main()
{
	student s;
	s.getdata();
	s.display();
	return 0;
}
