#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"enter values for a and b"<<endl;
	cin>>a>>b;
	cout<<"enter operator";
	cin>>op;
	switch(op)
{
		case '+':
	cout<<"addition of a and b="<<a+b;
	break;
	case '-':
	cout<<"subtract of a and b="<<a-b;
	break;
	default:
	cout<<"operator does not match";}
	return 0;
}
