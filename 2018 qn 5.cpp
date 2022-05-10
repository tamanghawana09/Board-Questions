//WAP to demonstrate conversion from one class to another class type without using constructor...
#include<iostream>
using namespace std;
class Rectangle{
	int length,width,area;
	public:
		Rectangle(int l,int w)
		{
			length=l;
			width=w;
			area=l*w;
		}
		void display()
		{
			cout<<"\nThe area of the rectangle is "<<area;
		}
};
class Triangle{
	int base ,height;
	float area1;
	public:
		Triangle(int b,int h)
		{
			base=b;
			height=h;
			area1=0.5*base*height;
		}
		void print()
		{
			cout<<"\nThe area of the triangle is :"<<area1;
		}
		operator Rectangle()
		{
			Rectangle temp(base,height);
			return temp;
		}
};
int main()
{
	Triangle t(10,20);
	Rectangle r=t;
	t.print();
	r.display();
	return 0;
}
