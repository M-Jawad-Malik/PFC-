#include<iostream>
using namespace std;
int sum(int x,int y)
{
int sum;
	sum=x+y;
	return sum;
	
}
int main()
{
	int a=5,b=3;
	cout<<"sum of a nad b = ";
    cout<<sum(a,b);
	return 0;
}
