#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5];
	
	for(int i=4;i>=0;i--)
	{
		b[i]=a[i];
		
		cout<<b[i]<<endl;
	}
}
