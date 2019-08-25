#include<iostream>
using namespace std;
int main()
{
	int size,pos,del,awais=0;
	int a[size];
	cout<<"enter size= ";
	cin>>size;
	for(int i=0;i<=size;i++)
	{
		cout<<"enter number= ";
		cin>>a[i];
	}
	cout<<"enter number to be delete= ";
	cin>>del;
	
	for(int i=0;i<size;i++)
	{
		if(a[i]==del)
		{
		for(int j=i;j<(size-1);j++)
		{
	     a[j]=a[j+1];	
		}
			awais++;
	break;}
	}

	if (awais==0)
	{
		cout<<"no does not exist";
	}
	else 
	{   cout<<"deletion successful";
	}
	cout<<"array's element after delletion=";
	for(int i=0;i<size-1;i++)
	{
		cout<<a[i];
	}
	
}
