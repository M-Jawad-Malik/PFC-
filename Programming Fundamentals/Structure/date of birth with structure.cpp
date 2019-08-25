#include<iostream>
#include<string> 
using namespace std;
struct dateofbirth
{
	int day,year;
	string month;
};
int main()
{
	dateofbirth jawad;
	cout<<"ENTER DAY : ";
	cin>>jawad.day;
	cout<<"ENTER MONTH : ";
	cin>>jawad.month;
	cout<<"ENTER YEAR : ";
	cin>>jawad.year;
	cout<<jawad.day<<"/"<<jawad.month<<"/"<<jawad.year;
	
}
