/*2017 qn 7
Assume that a bank maintains two kinds of accounts for customers, one called as savings account and the other as current account.The savings account
provides compound interest at the annual rate of 10% .Current account holders get simple interest of 5% per year.Create a class account that stores 
customer name and account number.From this, derive the classes : cuurent_account and saving_account.Include necessary member functions and calculate 
the total amount of money in an account for both types of customers.*/
#include<iostream>
#include<math.h>
using namespace std;
class Account{
	protected:
		string customer_name;
		int account_num;
		int balance;
		int t;
		public: 
		void get_details()
		{
			cout<<"Enter the name of the customer :";
			cin>>customer_name;
			fflush(stdin);
			cout<<"\nEnter the account number of the customer:";
			cin>>account_num;
			fflush(stdin);
			cout<<"\nEnter the balance amount:";
			cin>>balance;
			fflush(stdin);
			cout<<"\nEnter the time:";
			cin>>t;
			fflush(stdin);
		}
		void display()
		{
			cout<<"********************Details of the person**********************"<<endl;
			cout<<"\nCustomer Name :"<<customer_name<<endl;
			cout<<"\nCustomer acc number:"<<account_num<<endl;
		}
};
class Current_acc:public Account
{
	public:
	void simpleInterest()
	{
		int SI;
		int r1=5;
		SI=(balance*t*r1)/100;
		display();
		cout<<"\nThe total balance amount with the simple interest is :"<<SI<<endl;	
	}
};
					
class Saving_acc:public Account
{
	public:
		void compoundInterest()
		{
			int CI;
			int r2=10;
			CI=balance*pow(1.1,t);
			display();
			cout<<"\nThe total balance amount with the compound interest is :"<<CI<<endl;		
		}
				
};
int main()
{
	int acc_type;
	Current_acc obj2;
	Saving_acc obj3;
	cout<<"Enter the account type :"<<endl;
	cout<<"1.Current account"<<endl;
	cout<<"2.Saving account"<<endl;
	cin>>acc_type;
	if(acc_type==1)
	{
		obj2.get_details();
		obj2.simpleInterest();
	}
	else if (acc_type==2)
	{
		obj3.get_details();
		obj3.compoundInterest();
	}
	else
	{
		cout<<"Invalid Choice!!!";
	}
	return 0;
}
