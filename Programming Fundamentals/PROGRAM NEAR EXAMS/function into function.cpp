#include<iostream>
using namespace std;
void asitis(int digits[5])
{
cout<<"ELEMENTS OF ARRAY ARE = ";
for(int i=0;i<5;i++)

{cout<<digits[i]<<"   ";
}}
void odd(int digits[5])
{	cout<<"ODD NUMBERS ARE = ";
	for(int i=0;i<5;i++)
	{
		if(digits[i]%2!=0)
		{
	    cout<<digits[i]<<"  ";
		}
		
	}
}
void even(int digits[5])
{cout<<"	EVEN NUMBERS ARE = ";
	for(int i=0;i<5;i++)
	{
		if(digits[i]%2==0)
		{
			cout<<digits[i]<<"  ";
		}
		
	}
}
void display(int digits[5])
{int choice;
cout<<"ENTER 1 TO DISPLAY DIGITS AS Itis: "<<endl;
cout<<"ENTER 2 TO DISPLAY DIGITS TO PRINT ODD no's: "<<endl;
cout<<"ENTER 3 TO DISPLAY DIGITS TO PRINT EVEN no's:"<<endl;
cin>>choice;
if(choice==1)
{
	asitis(digits);
 } 
 else if(choice==2)
 {
 	odd(digits);
 }
 else if(choice==3)
 {
 	even(digits);
 }
 
}

int main()
{
	int digits[5]={3,2,6,8,9};
	display(digits);
	return 0;
	
}
