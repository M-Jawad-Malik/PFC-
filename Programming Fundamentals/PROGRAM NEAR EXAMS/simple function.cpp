#include<iostream>
using namespace std;
int a(int b,int c)
{
	int s;
	s=b-c;
	cout<<"SUBTRACTION = "<<s;
	return 0;
}
int main()
{
	int d,r;
	cout<<"ENTER 1st VALUE";
	cin>>d;
	cout<<"ENTER 2nd VALUE:";
	cin>>r;
	a(d,r);
	return 1;
	
	
}

