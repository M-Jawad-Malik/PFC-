#include<iostream>
using namespace std;
int main()
{ 
	int a,sum=0,n;
	cout<<"enter starting value=";
	cin>>a;
	cout<<"enter ending value=";
	cin>>n;
	
    do{
    	sum=sum+a;
    	a++;
    	if(a%2==0)
		cout<<a<<endl;
	}
	
	while(a<n);
    return 1;

}

