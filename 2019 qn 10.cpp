//Write a program to demonstrate use of constructor in derived class.
#include<iostream>
using namespace std;
class BASE{
	int value1;
	public:
		BASE(int x)
		{
			value1=x;
		}
		void display()
		{
			cout<<"\nThe value of BASE class is :"<<value1;
		}
};
class DERIVED :public BASE{
	int value2;
	public:
		DERIVED(int x,int y):BASE(x)
		{
			value2=y;
		}
		void print()
		{
			cout<<"\nThe value of DERIVED class is :"<<value2;
		}
};
int main()
{
	DERIVED obj1(1,2);
	obj1.display();
	obj1.print();
	return 0;
}
