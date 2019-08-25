#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int n,m;
	int a[n][m];
	int row_sum=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"ENTER ELEMENT OF ARRAY A = "<<endl;
			cin>>a[i][j];
		}
	}
	cout<<"ELEMENTS OF ARRAY ARE = "<<endl;

	for(int i=0;i<n;i++)
	{
			cout<<"      ";
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<endl<<endl;
		}
	}
	cout<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			row_sum=row_sum+a[i][j];
		}
	}
	cout<<row_sum<<endl;
}
