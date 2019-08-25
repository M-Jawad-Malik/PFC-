#include<iostream>
using namespace std;
int main()
{
	int size,a[17]={0,1,0,0,1,0,1,1,1,0,1,0,1,0,0,0,1};
	
	 int temp;
	for(int i=0;i<17;i++)
	{
		for(int j=0;j<16;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
			
		}
	}
	cout<<"element in after sepration= ";
	for(int i=0;i<17;i++)
	{
		cout<<a[i]<<"  ";
	}
	
	
}
