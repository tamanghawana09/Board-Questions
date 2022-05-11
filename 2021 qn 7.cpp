//WAP showing the example of basic to class type conversion
#include<iostream>
using namespace std;
class Time{
	int hrs,min;
	public:
		Time(int t)
		{
			hrs=t/60;
			min=t%60;
		}
		void display()
		{
			cout<<hrs<<":hr"<<endl;
			cout<<min<<":min"<<endl;
		}
};
int main()
{
	int duration;
	cout<<"Enter the duration in minutes:";
	cin>>duration;
	Time t1=duration;
	t1.display();
	return 0;
}

