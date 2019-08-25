#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char oper;
	cout<<"enter a=";
	cin>>a;
	cout<<"enter b=";
	cin>>b;
	cout<<"oper="<<oper;
	cin>>oper;
	switch(oper)
	{ case'+':
	cout<<"addition="<<a+b;
    break;
	case'-':
	cout<<"subtraction="<<a-b;	
    break;
	case'*':
	cout<<"multiplication="<<a/b;
    break;
	case'/':
	cout<<"division"<<a/b;
	} return 0;
}
