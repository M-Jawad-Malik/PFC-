#include<iostream>
using namespace std;
int main()
{
	int number,sum=0,r;
	do{
		cout<<"enter a number=";
		cin>>number;
		sum=sum+number;
		number++;
	    cout<<sum;
		
		
	}
	while(number!=0);

	return 0;
}
