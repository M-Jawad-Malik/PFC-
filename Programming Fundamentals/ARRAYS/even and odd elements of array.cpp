#include<iostream>
using namespace std;
int main()
{
	int a[5],size,count_even=0,count_odd=0;
	cout<<"enter size of array";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"enter element of array= ";
		cin>>a[i];
	}
	for(int i=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
			count_even++;
		}
		else
		{
		   count_odd++;	
		}
	}
	
	cout<<"total even no's= "<<count_even<<endl;
	cout<<"total odd no's=  "<<count_odd;

	return 0;
}
