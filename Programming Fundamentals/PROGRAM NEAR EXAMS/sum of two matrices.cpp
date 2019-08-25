#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m],b[n][m],c[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<" ENTER "<<i+1<<"st ELEMENT  OF ARRAY a = ";
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<" ENTER "<<i+1<<"st ELEMENT  OF ARRAY b = ";
			cin>>b[i][j];
		}
	}
		cout<<" ELEMENT  OF ARRAY c = ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		cout<<c[i][j]<<"  ";
			
		}
		
		cout<<endl;
	}
	return 0;
	
	
	
}
