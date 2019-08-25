#include<iostream>
using namespace std;
struct book
{
	int id,price,pages;
	
};
int main()
{
	book A;
	cout<<"ID OF BOOK A : ";
	cin>>A.id;
	cout<<"PRICE OF BOOK A : ";
	cin>>A.price;
	cout<<"PAGES OF BOOK A : ";
	cin>>A.pages;
	book B;
	cout<<"ID OF BOOK B : ";
	cin>>B.id;
	cout<<"PRICE OF BOOK B : ";
	cin>>B.price;
	cout<<"PAGES OF BOOK B : ";
	cin>>B.pages;
	if(A.price>B.price)
{
	cout<<"BOOK A IS MORE COSTLY ";
	}	
	else 
	{
		cout<<"BOOK B IS MORE COSTLY ";
	}
}
