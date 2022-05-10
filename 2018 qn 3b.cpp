//WAP in C++ that implements the concept of multilevel inheritance
#include<iostream>
using namespace std;
class X{
	int value1;
	public:
		X(int a)
		{
			value1=a;
		}
		void output1()
		{
			cout<<"\nThe value in the base class is :"<<value1;
		}
};
class Y :public X{
	int value2;
	public:
		Y(int a,int b) :X(a)
		{
			value2=b;
		}
		void output2()
		{
			cout<<"\nThe value in the subclass is :"<<value2;
		}
};
class Z :public Y{
	int value3;
	public:
		Z(int a, int b,int c) :Y(a,b)
		{
			value3=c;
		}
		void output3()
		{
			cout<<"\nThe value of the another subclass is :"<<value3;
		}
};
int main()
{
	Z obj3(1,2,3);
	obj3.output1();
	obj3.output2();
	obj3.output3();
	return 0;
}
