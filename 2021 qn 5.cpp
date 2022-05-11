//Write an OOP showing multiple inheritance..
#include<iostream>
using namespace std;
class KIST{
	protected:
	int stud1;
	public:
		void get_details1(int s1)
		{
			stud1=s1;
		}
		void display()
		{
			cout<<"\nThe total number of student in Kist :"<<stud1;
		}
};
class TRINITY{
	protected:
	int stud2;
	public:
		void get_details2(int s2)
		{
			stud2=s2;
		}
		void print()
		{
			cout<<"\nThe total number of student in Trinity :"<<stud2;
		}
};
class Students: public KIST,public TRINITY{
	public:
	int outStu;
	int tot_stud;
	void totalStudents()
	{
		tot_stud=stud1+stud2+outStu;
	}
	void output()
	{
		cout<<"\nTotal number of student who read in same class are :"<<tot_stud;
	}
};
int main()
{
	Students obj;
	int a,b;
	cout<<"\nEnter the total number of student in kist college :";
	cin>>a;
	obj.get_details1(a);
	cout<<"\nEnter the total number of student in trinity college :";
	cin>>b;
	obj.get_details2(b);
	cout<<"\nEnter the students from outside valley :";
	cin>>obj.outStu;
	obj.totalStudents();
	obj.display();
	obj.print();
	obj.output();
	return 0;
}
