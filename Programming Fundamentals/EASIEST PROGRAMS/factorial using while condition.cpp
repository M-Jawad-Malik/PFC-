#include<iostream>
using namespace std;
int main()
{
	int a,j,fact;
	a=1;
	fact=1;
	cout<<"enter j=";
	cin>>j;
	while(a<=j)
	{
		fact=fact*a;
		a++;
			}cout<<"fact is="<<fact; 
	return 0;
}
