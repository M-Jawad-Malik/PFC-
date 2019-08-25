#include<iostream>
using namespace std;
int main()
{
	int size,a[size],n;
		cout<<"enter size of array = ";
	cin>>size; 
	for(int i=0;i<size;i++)

	{
		cout<<"enter element of array";
		cin>>a[i];
	}
	cout<<"enter number to be found= ";
	cin>>n;
	for(int j=0;j<size;j++)
	{
		if(a[j]==n)
		{
			cout<<"number found suceesfully";
			break;
		}
		else if(a[j]!=n)
		{
			cout<<"not found"<<endl;
			break;
		}
		
	}
	
}
