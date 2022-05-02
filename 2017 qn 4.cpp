/*WAP with an overloaded function calc_area() that calculates and return area of circle and rectangle.Assume appropriate number and
type of arguments and return type*/
#include<iostream>
using namespace std;
void calc_area(int p)
{
	float pie=3.14,a=0;
	a=pie*p*p;
	cout<<"\nThe area of circle is :"<<a;
}
void calc_area(int x,int y)
{
	int ar=0;
	ar=x*y;
	cout<<"\nThe area of rectangle is :"<<ar;
}
int main()
{
	int l,b;
	float r;
	cout<<"\nFor the calculation of area of rectangle......"<<endl;
	cout<<"\nEnter the length of the rectangle :";
	cin>>l;
	cout<<"\nEnter the breadth of the rectangle :";
	cin>>b;
	calc_area(l,b);
	cout<<"\n\nFor the calculation of area of circle........"<<endl;
	cout<<"\nEnter the radius of the circle :";
	cin>>r;
	calc_area(r);
	return 0;
}
