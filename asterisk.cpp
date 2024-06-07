#include<iostream>
using namespace std;
int main()
{
    int i, j, k, r;
    cout << "Enter Number of rows:";
    cin >> r;
   for(i=0;i<r;i++){
   	for(j=i;j<r-1;j++){
   		cout<<" ";
	   }
	   for(k=0;k<=i;k++){
	   	if(k==0)
	   	cout<<"1";
	   	else
	   	cout<<" 1";
	   }
	   cout<<endl;
   }
   return 0;
}
