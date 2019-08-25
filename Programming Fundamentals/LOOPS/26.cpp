#include<iostream>
using namespace std;
int main()
{
	int n,m,a[n][m],del,flag=0;
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
	cin>>del;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==del)
			for(int k=i;k<n-1;k++)
			{
				for(int h=0;h<m-1;h++)
				a[k][h]=a[k+1][h+1];
			}
			flag++;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"number does not exist ";
	}
	else
	{
		cout<<"deletion successfull JAWAD"<<endl;
		cout<<"remianing elements are= ";
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		return 0;
	}
	
}
