#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"A:"<<a<<"B"<<b<<endl;
    }
    void operator -()
    {
        a=-a;
        b=-b;
    }
};
int main()
{
demo d(-10,20);
d.show();
-d;
d.show();
return 0;
}