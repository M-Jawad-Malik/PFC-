#include<iostream>
using namespace std;
int dataset(int a[100])
{
	int no;
int 	*max;
max=&a[0];
	cout<<"ENTER NUMBER OF DATA VALUES ";
	cin>>no;
	for(int i=0;i<no;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>a[i];
		
	}
	int *p[100];
	for(int i=0;i<100;i++)
	{
		p[i]=&a[i];
	}
	for(int i=0;i<no;i++)
	{
		if(*max<*p[i])
		{
			*max=*p[i];
		}
		
	}
	return *max;
	
}
int main()
{
	int b[100];
	cout<<"the max is "<<dataset(b);
	return 0;
}
