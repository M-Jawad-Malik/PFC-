#include<iostream>
using namespace std;
int a(int b,int c)
{
	int s;
	s=b-c;
	cout<<"SUBTRACTION="<<s;
	return s;
}
int main()
{
int d,r;
cout<<"entre 1st number=";
cin>>d;
cout<<"entre 2nd number=";
cin>>r;
a(d,r);
return 0;
}
