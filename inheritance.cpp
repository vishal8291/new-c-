//Multiple inheritance

#include<iostream>
using namespace std;
class Vehicle{
	public:
		void startEngine(){
			cout<<"engine started"<<endl;
		}
};
class Car:public Vehicle{
	public:
		void drive(){
			cout<<"car is driving"<<endl;
		}
};
class Bike:public vehicle{
	public:
		void ride(){
			cout<<"bike is riding"<<endl;
		}
};
int main(){
	Car c;
	 
}
