/*WAP using function template to find the sum of first and last element of an array of size , N of 
type int and float*/
#include<iostream>
using namespace std;
template<typename R>
void sum(R a[],int y)
{

	cout<<"\nThe sum of first and last element in the array is :"<<a[0]+a[y-1];
	
	
}
int main()
{
	int b=0,c[30],n,m;
	float d[30];
	cout<<"Enter the number of elements you want to enter in integer  :";
	cin>>n;
	cout<<"Enter the elements :"<<endl;
	for(b=0;b<n;b++)
	{
		cin>>c[b];
	}
	sum<int>(c,n);
	cout<<"\n\nEnter the number of elements you want to enter in float  :";
	cin>>m;
	cout<<"Enter the elements :"<<endl;
	for(b=0;b<m;b++)
	{
		cin>>d[b];
	}
	sum<float>(d,m);
	return 0;
}
