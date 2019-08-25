#include<iostream>
using namespace std;
int main()
{    int date;
     int m,n=0,s;
	int a[12]={31,28,31,30,31,30,31,30,31,30,31,30};
	cout<<"Enter date = ";
	cin>>date;
	cout<<" Enter Month = ";
	cin>>m;
	for(int i=0;i<m;i++)
	{
		n=n+a[i-1];
	}
        s=n+date;
        cout<<"Total No of days till date = "<<s;
        return 0;
}
