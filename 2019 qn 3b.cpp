/*Create a class named Employee with four data members (ID,name,position and salary).Using member
functions initialize the data members for 3 objects and display information of all three of them .
Assume appropriate data types.*/
#include<iostream>
using namespace std;
class employee{
	int id;
	string name;
	string position;
	int salary;
	public:
		void get_details(int a,string b ,string  c,int d)
		{
			id=a;
			name=b;
			position=c;
			salary=d;
		}
		void display(employee X[3])
		{
			int l;
			for(l=0;l<3;l++)
			{
				cout<<"The id of the employee :"<<X[l].id;
				cout<<"\nThe name of the employee :"<<X[l].name;
				cout<<"\nThe position of the employee :"<<X[l].position;
				cout<<"\nThe salary of the employee :"<<X[l].salary;
			}
				
		}
};
int main()
{
	employee obj[3],temp[3];
	string e,f;
	int i,j,k;
	for(i=0;i<3;i++)
	{
		cout<<"Enter the id of the "<<i+1<<" Employee :";
		cin>>j;
		fflush(stdin);
		cout<<"Enter the name of the "<<i+1<<" Employee :";
		getline(cin,e);
		fflush(stdin);
		cout<<"Enter the position of the "<<i+1<<" Employee :";
		getline(cin,f);
		fflush(stdin);
		cout<<"Enter the salary of the "<<i+1<<" Employee :";
		cin>>k;
		obj[i].get_details(j,e,f,k);
	}
	temp[3].display(obj);
	return 0;
}
