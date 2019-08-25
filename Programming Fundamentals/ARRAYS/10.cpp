#include<iostream>
using namespace std;
int main()
{
	int size,largest;
	int a[size];
	cout<<"enter size of array= ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"enter a number= ";
		cin>>a[i];
		
	}
	largest=a[0];
	for(int i=0;i<size;i++)
	{
		if(a[i]>largest)
		{
			largest=a[i];
		}
	}
	cout<<"largst element in array ="<<largest;
}
