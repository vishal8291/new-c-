#include<iostream>
using namespace std;
class Media
{
	public:
		virtual void add()=0;
		virtual void issue()=0;
		virtual void deposit()=0;
};
class Books:public Media
{
	public:
		void add()
		{
			cout<<"Book is Added"<<endl;
		}
		void issue()
		{
			cout<<"Book is Issued"<<endl;
		}
		void deposit()
		{
			cout<<"Book is Deposited"<<endl;
		}
};
class Tape:public Media
{
	public:
		void add()
		{
			cout<<"Tape is Added"<<endl;
		}
		void issue()
		{
			cout<<"Tape is Issued"<<endl;
		}
		void deposit()
		{
			cout<<"Tape is Deposited"<<endl;
		}
};
int main()
{
	Media *m;
	Books b;
	Tape t;
	cout<<"1.Book"<<endl;
	cout<<"2.Book"<<endl;
	int choice,select;
	cout<<"Enter the choice:";
	cin>>choice;
	if(choice==1)
	{
		m=&b;
	}
	else
	{
		m=&t;
	}
	cout<<"1.Add"<<endl;
	cout<<"2.Issue"<<endl;
	cout<<"3.Deposit"<<endl;
	cout<<"Enter the Choice:";
	cin>>select;
	if(select==1)
	m->add();
	else if(select==2)
	m->issue();
	else
	m->deposit();
	return 0;
}
