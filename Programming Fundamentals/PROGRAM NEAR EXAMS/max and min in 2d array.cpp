#include<iostream>
using namespace std;
int main()
{
	int a[2][4];
	for(int i=0;i<2;i++)
	{
		
		for(int j=0;j<4;j++)
		{cout<<"ENTER ELEMENT = ";
			cin>>a[i][j];
			
		}
	}
	cout<<" ELEMENTS OF ARRAY ARE = ";
	for(int i=0;i<2;i++)
	{
		
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<<"  ";
			
		}
		cout<<endl<<"                      ";
	
	}
	cout<<endl;
	int max=a[0][0];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
	}
	cout<<"MAX NO IN ARRAY IS =  "<<max<<endl;
	int min=a[0][1];
	for( int i=0;i<2;i++)
	{
		for( int j=0;j<4;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
			}
		}
	
	}
		cout<<"MINIMUM NO IN GIVEN ARRAY = "<<min;
}
