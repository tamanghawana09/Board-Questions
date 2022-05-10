//WAP to find perimeter of a square ,rectangle and circle using function overloading.
#include<iostream>
using namespace std;
int peri(int x)
{
	int a;
	a=4*x;
	return a;
}
int peri(int f,int g)
{
	int b,c;
	c=f+g;
	b=2*c;
	return b;
}
float peri(float r)
{
	float d;
	float pie=3.14;
	d=2*pie*r;
	return d;
}

int main()
{
	int len,bre,hei;
	float radius;
	cout<<"Enter the length: ";
	cin>>len;
	cout<<"\nEnter the breadth: ";
	cin>>bre;
	cout<<"\nEnter the radius: ";
	cin>>radius;
	cout<<"\nThe perimeter of the square is "<<peri(len)<<endl;
	cout<<"\nThe perimeter of the rectangle is "<<peri(len,bre)<<endl;
	cout<<"\nThe perimeter of the circle is "<<peri(radius)<<endl;
	return 0;
}
