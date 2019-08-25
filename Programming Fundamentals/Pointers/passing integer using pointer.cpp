#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int *p[5];
	for(int i=0;i<5;i++)
	{
		p[i]=&a[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<"enter integer "<<i+1<<" = ";
		cin>>*p[i];
	}
	cout<<"ENTERED INTEGERS ARE = "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<*p[i]<<"  ";
	}
	return 0;
}
