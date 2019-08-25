#include<iostream>
#include<string.h>
using namespace std;
struct BOOK
{
	string title[10],author[10],subject[10];
	int bookid;
char b;
};
int main()
{
	BOOK a;
	
a:	cout<<"BOOK ID: ";
	cin>>a.bookid;
	for(int i=0;i<10;i++)
	{
	if(i==a.bookid)
	{
	
	cout<<"BOOK TITLE: ";
	cin>>a.title[a.bookid];
	cout<<"BOOK AUTHOR: ";
	cin>>a.author[a.bookid];
	cout<<"BOOK SUBJECT: ";
	cin>>a.subject[a.bookid];}}
	
	cout<<"DO YOU WANT TO STORE INFORMATION OF ANY OTHER BOOK(y/n) ";
	cin>>a.b;
	if(a.b='y')
	{
		goto a;
	}
	if(a.b='n')
	{
		cout<<"\n";
		
		
	}
	cout<<"ENTER BOOK ID TO CHECK ITS RECORD: ";
	cin>>a.bookid;
	for(int i=0;i<10;i++)
	{
	if(i==a.bookid)
	{
	
	cout<<"BOOK ID: "<<a.bookid<<endl;
	cout<<"BOOK TITLE: "<<a.title<<endl;
	cout<<"BOOK AUTHOR:"<<a.author<<endl;
	cout<<"BOOK SUBJECT: "<<a.subject;
}}
	return 0;
	
	
}
