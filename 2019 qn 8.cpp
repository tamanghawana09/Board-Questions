/*Create a class student that stores name and roll no . From this class derive a class marks that 
stores marks for 3 subjects.Then from the class marks derive a class record which stores semester 
and average marks for 3 subjects.Create an object for class record and display name,roll,marks in 
3 subjects,semester,and average marks for a student.Assume appropriate data types.*/
#include<iostream>
#include<conio.h>
using namespace std;
class student{
	public :
		string name ;
		int roll;
		
};
class marks :public student{
	public:
	int mar1;
	int mar2;
	int mar3;
};
class record :public marks{
	public:
		int semester;
		int avg1;
		void average()
		{
			int avg;
			avg=mar1+mar2+mar3;
			avg1=avg/3;
			
		}
		void display()
		{
			
			cout<<"\nThe name of the student:"<<name;
			cout<<"\nThe roll of the student:"<<roll;
			cout<<"\nThe semester of the student:"<<semester;
			cout<<"\nThe marks of the three subject are :"<<endl;
			cout<<mar1<<endl;
			cout<<mar2<<endl;
			cout<<mar3<<endl;
			cout<<"\nThe average marks of the student:"<<avg1;
		}
};
int main()
{
	record std;
	cout<<"Enter the name of the student:";
	cin>>std.name;
	fflush(stdin);
	cout<<"\nEnter the roll no of the student:";
	cin>>std.roll;
	fflush(stdin);
	cout<<"\nEnter the marks of the three subjects respectively:"<<endl;
	cin>>std.mar1>>std.mar2>>std.mar3;
	fflush(stdin);
	cout<<"\nEnter the semester of the student:";
	cin>>std.semester;
	fflush(stdin);
	std.average();
	std.display();
	return 0;
}
