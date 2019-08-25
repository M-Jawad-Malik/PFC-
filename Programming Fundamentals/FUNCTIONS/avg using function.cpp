#include<iostream>
using namespace std;
double Avg(int arr[], int size)
{
	int sum;
	double avg;
	sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/size;
	return(avg);
}
int main()
{
	double a;
	int size;
	int arr1[size];
	cout<<"ENTER SIZE OF ARRAY1 = ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"enter element of array = ";
		cin>>arr1[i];
		
	}
	a=Avg(arr1,size);
	cout<<"AVERAGE OF ELEMENTS OF ARRAY = ";
	cout<<a;
	return 0;
}
