#include<iostream>
using namespace std;
int ft(int x)
{
	int f;
	f=x*12;
	cout<<f;
	return(f);
 } 
 int main()
 { 
 	int x;
 	cout<<"enter a value for x in feet = ";
 	cin>>x;
 	cout<<"value of x in inches = ";
 	ft(x);
 	return 0;
 }
