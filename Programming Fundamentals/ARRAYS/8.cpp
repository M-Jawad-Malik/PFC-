#include<iostream>
using namespace std;
int main()
{
	int size,del,flag=0;
	int a[size];
	cout<<"enter size of array = ";
	cin>>size;
	for(int i=0;i<size;i++)
	{   cout<<"enter element of array= ";
		cin>>a[i];
	}
	cout<<"enter number to be del= ";
	cin>>del;
	for(int i=0;i<size;i++)
	{
		if(a[i]==del)
		{
			for(int j=i;j<size-1;j++)
			{
				a[j]=a[j+1];
			}
			flag++;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"no does not exist";
	}
	else{
		cout<<"deletion successful"<<endl;
		
	}
	for(int i=0;i<size-1;i++)
	{
		cout<<"elements of array after deletion ="<<a[i]<<endl;
	}
	return 0;
}
