//WAP to show the static data member and static member function 
#include<iostream>
using namespace std;
class notebook{
	static int page_number;
	public:
		static int value()
		{
			return page_number;
		}
};
int notebook::page_number=1;
int main()
{
	cout<<"Numbers ="<<notebook::value()<<endl;
	return 0;
}
