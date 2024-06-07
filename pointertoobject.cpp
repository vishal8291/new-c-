//pointer to object
#include<iostream>
using namespace std;
class myclass
{
	public:
		void someFunction(){}
};
int main()
{
myclass object;
myclass*p=&object;
object.someFunction();
p->someFunction();
return 0; 	
}
