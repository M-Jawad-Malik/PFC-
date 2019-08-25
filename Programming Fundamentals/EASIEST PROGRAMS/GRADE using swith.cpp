#include<iostream>
using namespace std;
int main()
{
	//local variable declaration:
	char grade;
		  	
    cout<<"obtained grade="<<grade;
    cin>>grade;
	switch(grade)
	{ 

		case('A'||'1'):
		cout<<"EXCELLENT!"<<endl;
		break;
		case'B':
		cout<<"WELL DONE"<<endl;
		break;
		case'C':
		cout<<"AVERAGE"<<endl;
		break;
		case'D':
		cout<<"YOU PASS"<<endl;
		break;
		case'E':
		cout<<"BETTER TRY AGAIN"<<endl;
		break;
		default:
			cout<<"invalid grade"<<endl;
		}
		
	
		return 0;
	}
