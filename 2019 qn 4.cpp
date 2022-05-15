/*WAP using function template that asks user to enter the 10 elements in the array of type int and float and display
the five largest values in ascending order.*/
#include<iostream>
#include<iomanip>
using namespace std;
template<typename R>
void ascen(R a[])
{
	int i,j;
	R temp;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"The ascending order of the largest number are :"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int a[10],k,m;
	float a1[10];
	label1:
	cout<<"Enter the numbers you want in ascending order:"<<endl;
	cout<<"1.Integer"<<endl;
	cout<<"2.Float"<<endl;
	cin>>m;
	if(m==1)
	{
		cout<<"\nEnter the numbers :"<<endl;
		for(k=0;k<10;k++)
		{
			cin>>a[k];
		}
		ascen<int>(a);	
	}
	else if(m==2)
	{
		cout<<"\nEnter the numbers :"<<endl;
		for(k=0;k<10;k++)
		{
			cin>>a1[k];
		}
		ascen<float>(a1);
	}
	else
	{
		cout<<"\nInvalid choice !!!";
		goto label1;
	}
	return 0;
}
