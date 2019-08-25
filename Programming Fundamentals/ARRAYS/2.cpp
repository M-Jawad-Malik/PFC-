#include<iostream>
using namespace std;
int main()
{
	int size,a[size],temp;
	cout<<"enter size of array= ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
	 cout<<"enter number = ";
	 cin>>a[i];	
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
			
		}
	}
	cout<<"element in acending order =";
	for(int i=0;i<size;i++)
	{
		cout<<a[i];
	}
	
	
}
