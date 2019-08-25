#include<iostream>
using namespace std;
int sum_avg(int a[])
{
	int avg,sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	cout<<"SUM OF ELEMENTS OF ARRAY = "<<sum<<endl;
	avg=sum/5;
	cout<<"AVERAGE OF ELEMENTS OF ARRAY = "<<avg;
	return (sum,avg);
}
int max1(int a[])
{
	int max=a[0];
	for(int i=0;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	cout<<"MAX NUMBER IN ARRAY = "<<max;
	return max;
}
int min1(int a[])
{
	int min=a[0];
	for( int i=0;i<5;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"MINIMUM NUMBER IN ARRAY = "<<min;
	return min;
}
int main()
{
	int a[5];
	for( int i=0;i<5;i++)
	{
		cout<<"ENTER ELEMENT OF ARRAY = ";
		cin>>a[i];
	}
	sum_avg(a);
	cout<<endl;
	max1(a);
	cout<<endl;
	min1(a);
	return 0;
	
}
