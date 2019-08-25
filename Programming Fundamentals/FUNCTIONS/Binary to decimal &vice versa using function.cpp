#include<iostream>
using namespace std;
struct timeperioddifference
{
	int hour[2],minutes[2],second[2];
};
int main()
{
	timeperioddifference a;
a:
	cout<<"ENTER HOURS(H1): ";
	cin>>a.hour[0];
	if(a.hour[0]>12)
	{
		cout<<"As hours are greater than 12 Plz Again ";
		goto a;
	}
	cout<<"ENTER MINUTES(M1): ";
b:	cin>>a.minutes[0];
	if(a.minutes[0]>60)
	{
	cout<<"As minutes are greater than 60 Plz Again ";
		goto b;	
	}
c:	cout<<"ENTER SECOND(S1): ";
	cin>>a.second[0];
	if(a.second[0]>60)
	{
	cout<<"As minutes are greater than 60 Plz Again ";
		goto c;	
	}
	cout<<endl<<endl;
d:	cout<<"ENTER HOURS(H2): ";
	cin>>a.hour[1];
	if(a.hour[1]>12)
	{
		cout<<"As hours are greater than 12 Plz Again ";
		goto d;
	}
	
	
e:	cout<<"ENTER MINUTES(M2): ";
	cin>>a.minutes[1];
	if(a.minutes[1]>60)
	{
		cout<<"As minutes are greater than 60 Plz Again ";
		goto e;
	}
f:	cout<<"ENTER SECOND(S2): ";
	cin>>a.second[1];
	if(a.second[1]>60)
	{
	cout<<"As minutes are greater than 60 Plz Again ";
		goto f;	
	}
	if(a.hour[0]>a.hour[1])
	{
	
	cout<<"TIME PERIOD DIFFERENCE "<<a.hour[0]-a.hour[1]<<" "<<a.minutes[0]-a.minutes[1]<<"' "<<a.second[0]-a.second[1]<<"'' ";
	}
	else if(a.hour[1]>a.hour[0])
	{
	
	cout<<"TIME PERIOD DIFFERENCE "<<a.hour[1]-a.hour[0]<<"' "<<a.minutes[1]-a.minutes[0]<<"'' "<<a.second[1]-a.second[0];
	}
	
	return 0;
	
}
