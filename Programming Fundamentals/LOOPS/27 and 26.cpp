#include<iostream>
using namespace std;
int main()
{
	int n,m,num;
	int a[n][m];
	cout<<"enter n and m ="<<endl;
	cin>>n>>m;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			
			
		}
		cout<<endl;
	}
		cout<<"elements of given array= "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			
	cout<<a[i][j]<<"\t";	
		}
		cout<<endl;
	}
	cout<<"number to be found = ";
	cin>>num;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==num)

           {
           	cout<<"number found successfully"<<endl;
           	break;
		   }
		   else 
		   {
		   	cout<<"NO does not exist "<<endl;
		   	break;
		   }
		}
	}
	
}
