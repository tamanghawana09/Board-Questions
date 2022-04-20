/*WAP to create class EMP with data member (id,name,address).Derive a  CLASS salary with data member(basicsal,post) and again
derive class record  with data member (month ,absent,total) and display employ complete information where total is calculated by
deducing  total absent days from basicsal .*/
#include<iostream>
using namespace std;
class emp{
	protected:
		int id ;
		string name;
		string address;
		public:
			void getdetails(int x,string a ,string b)
			{
				id=x;
				name=a;
				address=b;
			}
};
class salary : public emp{
	public:
		int basicsal;
		string post;
};
class record :public salary{
	public:
		int month;
		int absent;
		int total;
		int u,v,w;
		void tot()
		{
			u=month*30;//days
			v=basicsal/30;
			w=u-absent;
			total=v*w;
			cout<<"\nTotal salary is :"<<total;

		}
		void display()
		{
			cout<<"The complete details of the employe is as follows::\n";
			cout<<"\nID of the employee :"<<id;
			cout<<"\nName of the employee :"<<name;
			cout<<"\nAddress of the employee :"<<address;
			cout<<"\nBasic salary of the employee :"<<basicsal;
			cout<<"\nPost of the employee :"<<post;
			cout<<"\nMonth worked :"<<month;
			cout<<"\nAbsent days :"<<absent;
			cout<<"\nTotal amount :"<<basicsal*month;
		}
};
int main()
{
	record obj1;
	int p;
	string q,r;
	cout<<"Enter the id of the employee :";
	cin>>p;
	fflush(stdin);
	cout<<"Enter the name of the employee :";
	cin>>q;
	fflush(stdin);
	cout<<"Enter the address of the employee :";
	cin>>r;
	obj1.getdetails(p,q,r);
	cout<<"Enter the basic salary of the employee :";
	cin>>obj1.basicsal;
	fflush(stdin);
	cout<<"Enter the post of the employee :";
	cin>>obj1.post;
	fflush(stdin);
	cout<<"Enter the total month :";
	cin>>obj1.month;
	fflush(stdin);
	cout<<"Absent days :";
	cin>>obj1.absent;
	obj1.display();
	obj1.tot();
	return 0;
}
