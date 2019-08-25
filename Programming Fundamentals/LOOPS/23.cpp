#include<iostream>
using namespace std;
int main()
{
	int check_prime;
	int i,n,result;
	cout<<"enter the number of prime numbers required\n";
	cin>>n;
	cout<<"first"<<n<<"prime numbers are:\n";
	for(i=0;i<n;i++)
	{
		result=check_prime(i);
		if(result==1)
		cout<<i<<"\n";
		
	}
	return 0;
}
