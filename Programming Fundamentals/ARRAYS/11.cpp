#include<iostream>
using namespace std;
int main()
{
	int size,a[size],prime=0;
	int n=0;
	n++;
	cout<<"enter size of array";
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		cout<<"enter number of array= ";
		cin>>a[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=2;j<size;j++)
		{
		 
		if( i!=j && a[i]/a[j]!=1)
		{
			prime++;
		
		}
	
			}
			for(int i=0;i<size;i++)
			{cout<<prime;
			
			} }
				
				
	
	
	
}
