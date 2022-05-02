//WAP parameterized constructor..
#include<iostream>
using namespace std;
class x{
	int a,b;
	public:
	x(int c,int d)
	{
		a=c;
		b=d;
	}
	void output()
	{
		cout<<"\nThe value of a is :"<<a;
		cout<<"\nThe value of b is :"<<b;
	}
};
int main()
{
	x obj1(10,12);
	obj1.output();
	return 0;
}
