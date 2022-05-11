//WAP to add two complex number of two different classes.
#include<iostream>
#include<conio.h>
using namespace std;
class secondComplex;
class firstComplex{
	public:
		int real;
		int img;
		friend class secondComplex;
		
};
class secondComplex{
	public:
		int real;
		int img;
		friend void add();
};
void add()
{
	firstComplex obj1;
	secondComplex obj2;
	int r,s;
	cout<<"Enter the real and imaginary for the first complex number below :"<<endl;
	cout<<"firstReal= ";
	cin>>obj1.real;
	cout<<"firstImaginary= ";
	cin>>obj1.img;
	cout<<"Enter the real and imaginary for the second complex number below :"<<endl;
	cout<<"secondReal= ";
	cin>>obj2.real;
	cout<<"secondImaginary= ";
	cin>>obj2.img;
	r=obj1.real+obj2.real;
	s=obj1.img+obj2.img;
	cout<<"Sum of two complex number ="<<r<<"+"<<s<<"i";
getch();
}
int main()
{
	add ();

	return 0;
}
