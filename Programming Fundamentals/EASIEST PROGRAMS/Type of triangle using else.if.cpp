#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter a value for a=";
	cin>>a;
	cout<<"enter a value for b=";
	cin>>b;
	cout<<"enter a value for c=";
	cin>>c;
	if(a==b && b==c)
	{
		cout<<"triangle is Equilateral";
	}
	else if(a==b || b==c || a==c)
	{
		cout<<"Triangle is Isoceles";
	}
	else
	{
		cout<<"Triangle is Scalene";
	}
	return 0;
 } 
