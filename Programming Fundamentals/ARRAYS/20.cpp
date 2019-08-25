#include<iostream>
using namespace std;
int main()
{
	int a[5]={4,7,3,6,9},flag=0;
	int p;
	cout<<"                                                  prepared by M.JAWAD                                                   ";
	cout<<"ELEMENTS of array =";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"  ";
		
	}
	cout<<endl;
	cout<<"enter position from where you want to delete element= ";
	cin>>p;
	for(int i=0;i<5;i++)
	{
		if(a[i]==a[p])
		{
			for(int j=i;j<4;j++)
			{
				a[j]=a[j+1];
			}
			flag++;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"ELEMENT at this position does not exist= "<<p;
	
	}
	
	else
	{
		cout<<"DELETION OF ELEMENT DONE SUCCESSFULLY"<<endl;
		cout<<"REMIANING ELEMENTS OF ARRAY ARE= ";
	for(int i=0;i<4;i++)
	{ 
	cout<<a[i]<<"   ";
		
	}
	
		
	}
	    
	
	return 0;
	
}
