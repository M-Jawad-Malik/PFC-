#include<iostream>
using namespace std;
int main()
{   int temp;
	int a[12]={0,1,0,1,0,0,0,1,0,1,1,1};
	for(int i=0;i<12;i++)
	{
		if(a[i]==0)
		{
			for(int j=0;j<12;j++)
			{
				a[j]=a[j+1];
			}
		}
	}
	
	for(int i=0;i<12;i++)
	{
		cout<<a[i];
	}
	
}
