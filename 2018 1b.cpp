//WAP to demonstrate constructor overloading
#include<iostream>
using namespace std;
class x{
	int a,b;
	public:
		x()
		{
			a=10;
			b=20;
		}
		x(int c,int d)
		{
			a=c;
			b=d;
		}
		void output()
		{
			cout<<"\nDefault constructor\n";
			cout<<a*b;
		}
};
int main()
{
	x obj(5,60);
	x obj1;
	obj1.output();
	obj.output();
	return 0;
}
