#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int min,max;
	min=a[0];
	for(int i=0;i<=4;i++)
	{
		
		if(a[i]>min)
		{
			min=a[i];
		}
		cout<<min;
	}
}
