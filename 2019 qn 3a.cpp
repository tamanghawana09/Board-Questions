//Give a suitable example for the default argument.
#include<iostream>
using namespace std;
int sum(int a=0,int b=20,int c=30);
int main()
{
	sum(1);
	sum(1,2);
	sum(1,2,3);
	return 0;
}
int sum(int a,int b,int c)
{
	int z;
	z=a+b+c;
	cout<<"\nThe sum of the integer are :"<<z;
}
