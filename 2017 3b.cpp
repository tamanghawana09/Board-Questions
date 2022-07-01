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
};mobile_phone mp;
void mobile_phone::put()
{
	fstream file;
		cout<<"\nEnter the model number :";
		cin>>modelNum;
		fflush(stdin);
		cout<<"Enter the screen size :";
		cin>>screenSize;
		fflush(stdin);
		cout<<"Enter the RAM :";
		cin>>RAM;
		fflush(stdin);
		cout<<"Enter the price of the mobile:";
		cin>>price;
		fflush(stdin);
		file.open("mobile1.txt",ios::out|ios::app);
		file.write((char *)this,sizeof(mobile_phone));

	file.close();
	getch();
}
void mobile_phone::get()
{
	int temp,i;
	cout<<"\n\nTo display the details of the mobile :";
	cout<<"\nEnter model number :";
	cin>>temp;
	fstream file;
	file.open("mobile1.txt",ios::in);
	 //file.seekg(0,ios::beg);
		while(file.read((char *)this,sizeof(mobile_phone)));
		{
			if(modelNum == temp)
			{
				cout<<"\nModel Number :"<<modelNum;
				cout<<"\nScreen Size :"<<screenSize;
				cout<<"\nRAM of mobile :"<<RAM;
				cout<<"\nPrice of mobile :"<<price;
			}
			else
			{
				cout<<"\nModel no not found!!!";
			}
		}
	file.close();
	getch();
}

int main()
{
	mp.put();
	mp.get();
	return 0;
}
