#include<iostream>
using namespace std;
int main()
{
int size,num,flag=0;
int a[size];
cout<<"enter size of array = ";
cin>>size;
for(int i=0;i<size;i++)
{
	cout<<"enter element of array = ";
	cin>>a[i];
}
cout<<"Elements of array are = ";
for(int k=0;k<size;k++)
{
	cout<<a[k]<<"\n";
	
}
cout<<"enter number to be deleted = ";
cin>>num;
for(int l=0;l<size;l++)
{
	if(a[l]==num)
	{
		a[l]=a[l+1];
		flag++;
		break;
	
		}
		
	
	}
	if(flag==0)
	{
		cout<<"this number is not present in given array ";
		
	}
	else 
	{
		cout<<"number deleted successfully"<<endl;
	}
	cout<<"elements array after deleting "<<num<<"are = ";
	for(int j=0;j<size-1;j++)
	{
		cout<<a[j];
		
	}
	return 0;
}
	

