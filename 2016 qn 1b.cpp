//WAP to oerload (-) operator to find difference of two complex object....
#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		complex operator - (complex const &obj)
		{
			complex result;
			result.real = real - obj.real;
			result.img = img -obj.img;
			return result;
		}
		void display()
		{
			cout<<real<<" - "<<img<<"i"<<"\n";
		}
};
int main()
{
	complex obj1(10,5);
	complex obj2(3,2);
	complex obj3 = obj1-obj2;
	obj3.display();
}
