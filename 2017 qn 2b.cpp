//WAP to add integers and returb sum using inline function.
#include<iostream>
using namespace std;
inline sum(int x,int y)
{
	return(x+y);
}
int main()
{
	int a,b;
	cout<<"Enter the first integer:";
	cin>>a;
	cout<<"Enter the second integer:";
	cin>>b;
	cout<<"\nThe sum of the intgers are :"<<sum(a,b);
	return 0;
}
