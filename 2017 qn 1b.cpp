/*WAP to add two objects of a class using friend function .The class consists of hour and minute as its data member,input(),
,sum()and output() as its member functions*/
#include<iostream>
using namespace std;
class Time{
	int hrs,min;
	public:
		void input(int x,int y)
		{
			hrs=x;
			min=y;
		}
		void sum(Time p,Time r)
		 {
		 	
		 	hrs=p.hrs+r.hrs;
		 	min=p.min+r.min;
		 }
		 friend void output(Time);
};
void output(Time obj4)
{
	cout<<"\nThe sum of the hour is :"<<obj4.hrs;
	cout<<"\nThe sum of min is :"<<obj4.min;
}
int main()
{
	Time obj1,obj2,obj3;
	cout<<"\nFor the first object"<<endl;
	int a,b;
	cout<<"\nEnter the hrs :";
	cin>>a;
	cout<<"\nEnter the min :";
	cin>>b;
	obj1.input(a,b);
	cout<<"\nFor the second object"<<endl;
	int c,d;
	cout<<"\nEnter the hrs :";
	cin>>c;
	cout<<"\nEnter the min :";
	cin>>d;
	obj2.input(c,d);
	obj3.sum(obj1,obj2);
	output(obj3);
	return 0;
}
