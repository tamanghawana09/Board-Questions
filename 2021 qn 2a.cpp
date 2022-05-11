//WAP showing the example of the parameterized constructor
#include<iostream>
using namespace std;
class cons{
	int feet,inch;
	public:
		cons(int f,int i)
		{
			feet=f;
			inch=i; 
		}
		void display()
		{
			cout<<"\nThe value in feet is :"<<feet;
			cout<<"\nThe value in inch is :"<<inch;
		}
};
int main()
{
	cons obj1(10,5);
	obj1.display();
	return 0;
}
