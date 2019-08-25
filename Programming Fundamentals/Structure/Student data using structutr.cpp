#include<iostream>
#include<string.h>
using namespace std;
struct student
{
	string name[10],rollno[10],Class[10],section[10],semester[10];
};
int main()
{
	student a;
	for(int i=0;i<10;i++)
	{
	
	cout<<"NAME OF STUDENT: ";
	cin>>a.name[i];
	cout<<"ROLL NO OF STUDENT: ";
	cin>>a.rollno[i];
	cout<<"CLASS OF STUDENT: ";
	cin>>a.Class[i];
	cout<<"SECTION OF STUDENT: ";
	cin>>a.section[i];
	cout<<"SEMESTER OF STUDENT: ";
	cin>>a.semester[i];
	cout<<endl<<endl;
	
}
for(int i=0;i<10;i++)
	{
	
	cout<<"NAME OF STUDENT: "<<a.name[i]<<endl;
	cout<<"ROLL NO OF STUDENT:"<<a.rollno[i]<<endl;
	cout<<"CLASS OF STUDENT: "<<a.Class[i]<<endl;
	cout<<"SECTION OF STUDENT: "<<a.section[i]<<endl;
	cout<<"SEMESTER OF STUDENT: "<<a.semester[i]<<endl;
	cout<<endl<<endl;
	
}
return 0;
}

