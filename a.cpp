#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char ch;
    cout<<"select the operator(+,-,/,*)";
    float result;
    cin>>ch;
    cout<<"enter two number";
    cin>>num1>>num2;
    switch(ch)
    {
        case'+':
            result=num1+num2;
            break;
        case'-':
            result=num1-num2;
            break;
        case'/':
            if(num2==0)
            {
                cout<<"cannot be divide by 0";
            }
            else
            {
                result=num1/num2;
            }
            break;
        case'*':
            result=num1*num2;
            break;
        default:
            cout<<"invalid operator";
            return -1;
    }
    cout<<num1<<ch<<num2<<"="<<result;
    return 0;
}

