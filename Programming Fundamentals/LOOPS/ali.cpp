#include<iostream>
using namespace std;
void increment(int & x);
int main()
{
	int a=1;
	cout<<"value of a after function call ";
	increment(a);
	cout<<endl;
	cout<<a;	
	return 0;
	
}
void increment(int & x)
{
	x=x+1;
	cout<<x;
	
	
}
