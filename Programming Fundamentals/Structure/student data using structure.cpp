#include<iostream>
using namespace std;
struct student 
	{
		int rollno,age,marks;
		char grade;
	};
int main()
{
	
	student jawad;
	cout<<"ENTER OF ROLL NOSTUDENT: ";
	cin>>jawad.rollno;
	cout<<"ENTER OF AGE STUDENT: ";
	cin>>jawad.age;
	cout<<"ENTER OF MARKS  STUDENT: ";
	cin>>jawad.marks;
	cout<<"ENTER OF GRADE STUDENT: ";
	cin>>jawad.grade;
	cout<<"ROLL NO OF STUDENT"<<jawad.rollno<<endl;
	cout<<"AGE OF STUDENT"<<jawad.age<<endl;
	cout<<"MARKS OF STUDENT"<<jawad.marks<<endl;
	cout<<"GRADE OF STUDENT"<<jawad.grade<<endl;
}
