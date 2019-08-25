#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,m,sum=0,sum1=0;
	cout<<"ENTER ROWS = ";
	cin>>n;
	cout<<"ENTER COLOUMNS =";
	cin>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"ENTER ELEMENT = ";
			cin>>arr[i][j];
		}
	}
	cout<<"ELEMENT OF ARRAY = ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			
			
			if(i==j)
			{
				sum=sum+arr[i][j];
			}}
	}
	cout<<"SUM OF ELEMENTS OF PRINCIPLE DIAGONAL = "<<sum<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			
			
			if(i==n-j-1)
			{
				sum1=sum1+arr[i][j];
			}}
	}
	cout<<"SUM OF ELEMENTS OF SECONDARY DIAGONAL = "<<sum1;
	return 0;
	
	
}
