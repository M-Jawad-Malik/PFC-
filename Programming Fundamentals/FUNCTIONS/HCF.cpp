#include<iostream>
using namespace std;
int HCF()
{
	int n,a,b,hcf;
	cout<<"Enter Value For 1st No: ";
	cin>>a;
	cout<<"Enter Value For 2nd No: ";
	cin>>b;
	if(a>b)
	{
	
	n=b;}
	else 
	n=a;
	for(int i=1;i<=n;i++)
	{
		if(a%i==0&&b%i==0)
		{
			hcf=i;
		}
	}
	
	return hcf;
}
int main()
{
	cout<<"HCF Of Entered Numbers Is = "<<HCF();
	return 0;
}
