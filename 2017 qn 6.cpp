//WAP to convert class type into basic type ...
#include<iostream>
#include<conio.h>
using namespace std;
class x{
	int hrs ,min;
	public:
		x(int,int);
		operator int();
		~x()
		{
			cout<<"\nDestructor called.......";
		}
		
};
x::x(int a,int b)
{
	cout<<"\nconstructor called with two parameter.......";
	hrs=a;
	min=b;
}
x:: operator int()
{
	cout<<"\nclass type to basic type conversion........";
	return(hrs*60+min);
} 
int main()
{
	int h,m,duration;
	cout<<"\nEnter the hour :";
	cin>>h;
	cout<<"\nEnter the minutes :";
	cin>>m;
	x t(h,m);
	duration=t;
	cout<<"\nTotal minutes are ::"<<duration;
	cout<<"\nSecond method operator overloading.......";
	duration=t. operator int();
	cout<<"\nTotal minutes are ::"<<duration;
	getch();
}
