//WAP to sort N number in ascending order using function template.....
#include<iostream>
using namespace std;
template<typename R>void sortt(R b[],R y)
{
	R i=0,j=0,temp;
	for(i=0;i<y;i++)
	{
		for(j=i+1;j<y;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[j];
				b[j]=b[i];
				b[i]=temp;
			}
		}
	}
	cout<<"ascending order\n";
	for(i=0;i<y;i++)
	{
		cout<<b[i]<<endl;
	}

}
int main()
{
	int x[10];
	int n,i=0,j=0;
	cout<<"\nEnter the number to be sorted:";
	cin>>n;
	cout<<"Enter the numbers:\n";
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		
	}
	sortt<int>(x,n);
	return 0;
}
