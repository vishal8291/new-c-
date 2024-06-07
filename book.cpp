#include<iostream>
using namespace std;
class books
{
	private:
	char bookname[20];
	int bookno;
	public:
		void getdata()
		{
			cout<<"enter bookname";
			cin>>bookname;
			cout<<"enter bookno";
			cin>>bookno;
		}
		void displaydata()
		{
			cout<<"name"<<bookname<<endl;
			cout<<"bookno"<<bookno<<endl;
		}
};
int main()
{
	books b;
	b.getdata();
	b.displaydata();
	return 0;
}
