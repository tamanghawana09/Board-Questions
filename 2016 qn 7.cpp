//WAP to demonstrate conversion between object and basic type.
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class Time{
	int hrs,min;
	public:
		//constructor
		Time(int a,int b)
		{
			cout<<"\nConstructor called with two parameters.......\n";
			hrs=a;
			min=b;
		}
		//casting operator function
		operator int()
		{
			cout<<"\nClass type to Basic type conversion..........\n";
			return(hrs*60+min);
		}
		//destructor
		~Time()
		{
			cout<<"\nDestructor called...................."<<endl;
		}
};
int main()
{
	int h,m,duration;
	cout<<"\nEnter hours:";
	cin>>h;
	cout<<"\nEnter minutes:";
	cin>>m;
	Time t(h,m);//construct object
	duration=t;//casting conversion or duration =(int)t
	cout<<"\nTotal minutes are :"<<duration;
	cout<<"\n2nd method operator overloading";
	duration=t.int();
	cout<<"\nTotal minutes are :"<<duration;
 getch();
}
