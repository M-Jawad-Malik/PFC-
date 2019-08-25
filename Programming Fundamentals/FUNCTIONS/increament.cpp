#include<iostream>
#include<math.h>
using namespace std;
void increment(int & a)
{ 
	a=a+1;
	cout<<a;
}
int main()
{
	int a1;
	cout<<"Value of a1 = ";
	cin>>a1;
	cout<<"VALUE OF a1 AFTER INCREMENT =  ";
	increment(a1);
	
	
	return 0;
}
