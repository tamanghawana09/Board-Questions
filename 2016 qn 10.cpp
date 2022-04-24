//WAP to swap contents of two variables of type int,float and double using function template.
#include<iostream>
using namespace std;
template<typename R> void swapp(R x,R y)
{
	R temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"\nAfter swapping............";
	cout<<"\n\nThe first num is :"<<x;
	cout<<"\n\nThe second num is :"<<temp;
}
int main()
{
	
	swapp<int>(10,5);
	swapp<double>(12.5,3.2);
	swapp<char>('g','h');
	
	return 0;
}
