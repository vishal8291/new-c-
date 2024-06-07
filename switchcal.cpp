#include <iostream>
#include<string>
using namespace std;
class Student{
	private:
		string name;
		int rollno;
		static int count;
		public:
			Student(string Studentname,int Studentrollno){
				name="vishal";
				rollno=15;
				count++;
			}
			void displayDetails(){
				cout<<"name:"<<endl;
				cout<<"rollno"<<endl;  
			}
};
