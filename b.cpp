#include<iostream>
using namespace std;
int main()
{
    int hours,min,seconds,remainingseconds;
    cout<<"enter the second";
    cin>>seconds;
    hours=seconds/3600;
    min=(seconds%3600)/60;
    remainingseconds=seconds%60;
    cout<<"seconds in hour-min-sec is "<<hours<<" "<<min<<" "<<remainingseconds;
    return 0;
}

