#include<iostream>
using namespace std;
class Complex{
private:
int real,imag;
public:
Complex(int r=0,int i=0){
    real=r;
    imag=i;
}
void operator++() {
        ++real;
        ++imag;
    }
//Binay operator
/*Complex operator+(Complex const& obj){
    Complex res;
    res.real=real+obj.real;
    res.imag=imag+obj.imag;
    return res;
}*/
//unary operator
void print(){
    cout<<real<<"+i"<<imag<<'\n';
}
};
int main(){
    Complex c1(10,5),c2(2,4);
    ++c1;
    c1.print();
    //Complex c3=c1+c2;
   // c3.print();
    return 0;
}