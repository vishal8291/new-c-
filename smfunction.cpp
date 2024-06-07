#include <iostream>
using namespace std;
class Stu_Mem_fun{
    int a;
    public:
    static int count;
    static countfun(){
        cout<<"the object sequence number:"<<count<<endl;
        //cin<<a;
    }
    void read(){
        cout<<"enter value for a:";
        cin>>a;
    }
    void print(){
        cout<<"value of a is:"<<a<<endl;
    }
    int Stu_Mem_fun::count;
}
int main(){
    Stu_Mem_fun s1;
    Stu_Mem_fun::countfun();
    s1.read();
    s1.print();
}