#include<iostream>
using namespace std;
int main()
{
	int temperature;
	cout<<"Enter a value for temperature in centigrde=";
	cin>>temperature;
	if(temperature<0)
	{
		cout<<"freezing weather";
	}
	
	else if(temperature<=10)
	{
		cout<<"very cold weather";
	}
	
	else if(temperature<=20)
	{
		cout<<"cold weather";
	}
	
	else if(temperature<=30)
	{
		cout<<"normal weather";
	}
	
	else if(temperature<=40)
	{
		cout<<"weather is hot";
	}
	
	else if(temperature>40)
	{
		cout<<"extremely hot weather";
	}
	return 0;
}
