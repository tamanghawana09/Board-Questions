//BIT(Bachelor in Information and Technology)
/*WAP to read two strings and concatenate them using the example of operator overloading*/
#include<iostream>
using namespace std;
class conca{
	string name;		//private data member
	public:		//access specifier
	void get_details(string b)
	{
		name=b;
	}
	conca operator +(const conca &obj)		//Binary operator format
	{
		conca temp;
		temp.name=name+obj.name;
		return temp;
	}
	void output()
	{
		cout<<"The concatination of the two string are :"<<name;
	}
};
int main()
{
	conca obj1,obj2,result;
	string a,c;
	cout<<"Enter the first string :";
	getline(cin,a);
	obj1.get_details(a);
	cout<<"\nEnter the second string :";
	getline(cin,c);
	obj2.get_details(c);
	result=obj1+obj2;		//Binary operator call
	result.output();
}
