//WAP showing the example of new and delete operator
#include<iostream>
using namespace std;
int main()
{
	int *p1,*p2,sum;
	p1=new int;
	p2=new int;
	cout<<"Enter first value :";
	cin>>*p1;
	cout<<"\nEnter second value :";
	cin>>*p2;
	sum=*p1+*p2;
	cout<<"Sum of values ="<<sum<<endl;
	delete p1;
	delete p2;
	return 0;
}
