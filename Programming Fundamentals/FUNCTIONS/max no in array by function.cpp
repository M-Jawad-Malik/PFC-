#include<iostream>
using namespace std;
int  max1(int a[5])
{    int max;
	max=a[0];
	for(int i=0;i<5;i++)
	{
		if(max<a[i])
		
		{
		max=a[i];
		cout<<"max no in given array is = "<<max;}
		break;
		}
		
		return (max);
	}
int main()
{
	int m;
	int n[5]={1,2,3,4,5};
	m=max1(n);
	
	cout<<m;
	
	return 0;
		}		

