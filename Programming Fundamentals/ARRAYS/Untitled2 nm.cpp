#include<iostream>
using namespace std;
int main()
{
	int arr[5],even[5],odd[5];
	int j=0;
	int k=0;
	for( int i=0; i<5; i++)
	{
		cin>>arr[i];
	}
	for( int i=0; i<5; i++)
	{
		if( arr[i]%2==0)
		   {
		   even[j]=arr[i];

		   j++;}
		else 
	       {
		   odd[k]=arr[i];
	       k++;}
	}
	for (int i=0;i<5;i++)
	{
	cout<<" even no="<<even[i]<<endl;
    
	cout<<"odd no="<<odd[i]<<endl;
	}


return 0;
}
