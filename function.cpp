#include<iostream>
using namespace std;
void display(int var1,double var2){
    cout<<"integer numbers:"<<var1;
    cout<<"double numbers:"<<var2<<endl;
}
void display(int var){
    cout<<"integer number:"<<var<<endl;
}
void display(double var){
    cout<<"double number"<<var<<endl;
}
int main(){
    int a=5;
    double b=5.6;
    display(a);
    display(b);
    display(a,b);
    return 0;
}