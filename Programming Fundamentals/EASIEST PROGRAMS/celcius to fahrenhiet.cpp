#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int celcius,fehrenhiet;1.8,32;
	cout<<"Enter value of temperature in celcius=";
	cin>>celcius;
	fehrenhiet=1.8*celcius+32;
	cout<<"Temperature in fehrenhiet="<<fehrenhiet<<endl;
	

	int yard,mile;1760;
	cout<<"Enter distance in mile=";
	cin>>mile;
	yard=mile/1760;
	cout<<"Givn Distance in yard="<<yard<<endl;
	
	int centimeter,meter;1000;
	cout<<"Enter value of length in centimeter=";
	cin>>centimeter;
	meter=centimeter/100;
	cout<<"Length in meter="<<meter<<endl;
	
	int feet,inches;12;
	
	cout<<"Enter value of lenght in feet=";
	cin>>feet;
	inches=12*feet;
	cout<<"Lenght in inches="<<inches;
	return 0;
}
	
