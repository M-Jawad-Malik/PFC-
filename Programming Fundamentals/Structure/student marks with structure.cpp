#include<iostream>
#include<string>
using namespace std;
struct sheet
{
	string name;
	int rollno,marks[6];
};
int main()
{ int sum=0,avg;
	sheet a;
	cout<<"ENTER NAME OF STUDENT : ";
	cin>>a.name;
	cout<<"ENTER ROLL NO: ";
	cin>>a.rollno;
	for(int i=0;i<6;i++)
	{
	
	cout<<"ENTER MARKS OF SUBJECT "<<i+1<<"= ";
	cin>>a.marks[i];
}
cout<<"NAME OF STUDENT : "<<a.name<<endl;
cout<<"ROLL NO OF STUDENT : "<<a.rollno<<endl;
for(int i=0;i<6;i++)
{
	cout<<"MARKS OF SUBJECT "<<i+1<<"= "<<a.marks[i]<<endl;
sum=sum+a.marks[i];	
}
cout<<"TOTAL MARKS = "<<sum<<endl;
avg=sum/6;
cout<<"AVERAGE OF MARKS = "<<avg;

}
