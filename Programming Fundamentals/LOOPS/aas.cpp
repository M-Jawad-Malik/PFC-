#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int max;
	max=a[0];
	for(int i=0;i<10;i++)
	{
		cout<<"enter number =";
		cin>>a[i];
		
		if(a[i]>max)
		{max=a[i];}
		
	}
	cout<<"maximum no is = "<<max<<endl;
	
	if(max==a[0])
{
	cout<<"location of greater no in array= "<<max<<"is =a[0] ";
	}
	else if(max==a[1])
{
	cout<<"location of greater no in array= "<<max<<" is =a[1] ";
	}	
	else	if(max==a[2])
{
	cout<<"location of greater no in array= "<<max<<"  is =a[2] ";
	}	
	else	if(max==a[3])
{
	cout<<"location of greater no in array= "<<max<<" is =a[3] ";
	}	
	else	if(max==a[4])
{
	cout<<"location of greater no in array= "<<max<<"  is =a[4] ";
	}	
	else	if(max==a[5])
{
	cout<<"location of greater no in array= "<<max<<"  is =a[5] ";
	}	
	else	if(max==a[6])
{
	cout<<"location of greater no in array= "<<max<<"  is =a[6] ";
	}	
	else	if(max==a[7])
{
	cout<<"location of greater no in array= "<<max<<"  is =a[7] ";
	}	
	else	if(max==a[8])
{
	cout<<"location of greater no in array= "<<max<<"  is =a[8] ";
	}	
	else	if(max==a[9])
{
	cout<<"location of greater no in array= "<<max<<"  is =a[9] ";
	}	
	
	return 0;
}
