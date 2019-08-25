#include<iostream>
using namespace std;
int user(int n)
{
	cout<<"ENTER NUMBER = ";
	cin>>n;
	cout<<"                         ----------------------TABLE OF "<<n<<"-------------------------"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<n<<" * "<<i+1<<" = "<<n*(i+1)<<endl;
		
	}
	return 0;
}
int main()
{
	int x;
	user(x);
	return 1;
	
}
