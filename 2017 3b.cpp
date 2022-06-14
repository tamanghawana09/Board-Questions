/*Suppose an electronic store sells 10 types of mobile phone. Each phone have its own phone model number, 
screen size, RAM and price .WAP to create a file name mobile.txt to store information for 10 mobile and display.*/
#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class mobile_phone
{
	public:
		int modelNum;
		int screenSize;
		int RAM;
		int price;
		void put();
		void get();
		void switchCase();
};mobile_phone mp[3];
void mobile_phone::put()
{
	fstream file;
	int n,i;
	for(i=0;i<3;i++)
	{
		cout<<"\nEnter the model number :";
		cin>>mp[i].modelNum;
		fflush(stdin);
		cout<<"Enter the screen size :";
		cin>>mp[i].screenSize;
		fflush(stdin);
		cout<<"Enter the RAM :";
		cin>>mp[i].RAM;
		fflush(stdin);
		cout<<"Enter the price of the mobile:";
		cin>>mp[i].price;
		fflush(stdin);
		file.open("mobile.dat",ios::out|ios::app);
		file.write((char *)this,sizeof(mobile_phone));
	}
	file.close();
	mp[i].switchCase();
	getch();
}
void mobile_phone::get()
{
	int temp,i;
	cout<<"\nEnter model number :";
	cin>>temp;
	fstream file;
	file.open("mobile.dat",ios::in);
		while(file.read((char *)this,sizeof(mobile_phone)));
		{
			if(modelNum=temp)
			{
				cout<<"\nModel Number :"<<modelNum;
				cout<<"\nScreen Size :"<<screenSize;
				cout<<"\nRAM of mobile :"<<RAM;
				cout<<"\nPrice of mobile :"<<price;
			}
		}
	file.close();
	mp[i].switchCase();
	getch();
}
void mobile_phone :: switchCase()
{
	int a,i;
	label1:
	cout<<"\n\nOperation you can do";
	cout<<"\n1.Enter details:";
	cout<<"\n2.Display details:";
	cout<<"\n3.Exit the program :";
	cout<<"\n\nEnter which operation you would like to do :";
	cin>>i;
	switch(i)
	{
		case 1:
			{
				mp[a].put();
				break;
			}
		case 2:
			{
				mp[a].get();
				break;
			}
		case 3:
			{
				exit(0);
			}
		default :
			{
				cout<<"!!!Invalid choice!!!";
				goto label1;
			}
	}
}
int main()
{
	int i=0;
	mp[i].switchCase();
	return 0;
}
