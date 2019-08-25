#include<iostream>
#include<math.h>
using namespace std;
const double pi=3.14159;
double area(double & radius ){

	return(pi*pow(radius,2));
}
double volume(double & radius)
{
	return((4/3)*pi*pow(radius,3));
}
int main()
{
	double rad,area_of_circle,volume_of_sphere;
	cout<<"Enter radius = ";
	cin>>rad;
	area_of_circle=area(rad);
	volume_of_sphere=volume(rad);
	cout<<"AREA OF CIRCLE = "<<area_of_circle<<endl;
	cout<<"AREA OF SPHERE = "<<volume_of_sphere;
	return 0;
}
