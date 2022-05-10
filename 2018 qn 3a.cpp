/*WAP to show if a base and derived class each include a member function with same name 
which member function will be called by an object of derived class and why ? */
#include<iostream>
using namespace std;
class Base{
	int x ,y;
	public:
		Base()
		{
			x=20;
			y=30;
		}
		void output()
		{
			cout<<"The integer values are :"<<x<< y<<endl;
		}
};
class Derived :public Base{
	int a,b;
	public:
		Derived()
		{
			a=25;
			b=35;
		}
		void output()
		{
			cout<<"\nThe integer values are :"<<a<< b<<endl;
		}
};
int main()
{
	Derived obj;
	obj.output();
	obj.output();
	return 0;
}
