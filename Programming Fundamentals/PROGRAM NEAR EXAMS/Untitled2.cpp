#include<iostream>
using namespace std;
int main()
{
	int a[7]={41,46,39,46,87,3,4};
	int temp;
	for(int i=0;i<7;i++)
	{
	for(int j=0;j<7-1;i++)
	{
		if(a[j]<a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		
	}}
	cout<<"ELEMENTS AFTER BUBBLE SORTING = ";
	for(int i=0;i<7;i++)
	{
		cout<<a[i]<<"  ";
	}
	
	return 0;
	}

