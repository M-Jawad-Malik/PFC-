#include<iostream>
using namespace std;
 void swap(int & x, int & y)
{ int temp,sum,sub;
  temp=x;
  x=y;
  y=temp;
  
	
}
int input(int c,int d)
{
	cin>>c>>d;
	return (c,d);
}
void output(int e,int f)
{
	cout<<"output is= "<<e<<f;
    
}
int main()
{
	int a,b;
	input(a,b);
	swap(a,b);
	output(a,b);
	return 0;
	
}
