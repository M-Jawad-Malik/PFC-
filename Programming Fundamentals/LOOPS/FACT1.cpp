#include<iostream>
using namespace std;
int main()
{
	int a,fact,num;
	cout<<"enter number=";
	cin>>num;
	fact=1;
	for(a=num;a>=1;a--)
	{
	 fact=fact*a;
	} cout<<"fact is"<<fact;
}
