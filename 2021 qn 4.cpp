//WAP to swap two variable using function template
#include<iostream>
using namespace std;
template<typename R>
void swapp(R a, R b)
{
	R temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nThe integers after swapping are:"<<endl<<a<<endl<<b;
}
int main()
{
	int x,y,result;
	cout<<"Enter the two integers you want to swap:"<<endl;
	cin>>x>>y;
	swapp<int>(x,y);
}
