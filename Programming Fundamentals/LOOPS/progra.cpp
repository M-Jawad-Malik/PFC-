#include<iostream>
using namespace std;
int main()
{
	int a1[10]={1,2,3,4,5,6,7,8,9,10};
	int a2[10];
	for(int i=9;i>=0;i--)
	{
		a2[i]=a1[i];
		cout<<a2[i]<<endl;
	}
	return 0;
}
