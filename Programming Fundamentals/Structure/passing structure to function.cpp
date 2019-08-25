#include<iostream>
using namespace std;
struct customer
{
	int account no;
	char name[80];
	int balance;
}
void accept(struct customer[],int);
void display(struct customer[],int);
void deposit(struct customer[],int,int,int);
void search(struct customer[],int,int);
void withdraw(struct customer[],int,int,int);
int main()
{
	struct customer data[20];
	int n,choice,account_no,amount,index;
	cout<<"\t\t\t\t\t\t\t\t\t\tBANKING SYSTEM\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tNUMBER OF CUSTOMER RECORD YOU WANT TO ENTER = \n\n\n\n";
	cin>>n;
	accept(data,n);
	do
	{
		cout<<"\t\t\t\t\t\t\t\tBANKING SYSTEM MENU\n\n";
		cout<<"PRESS 1 TO DISPLAY ALL RECORD\n\n";
		cout<<"PRESS 2 TO SEARCH RECORD\n\n";
		cout<<"PRESS 3 TO DEPOSIT AMOUNT\n\n";
		cout<<"PRESS 4 TO WITHDRAW AMOUNT\n\n";
		cout<<"PRESS 0 TO EXIST\n\n";
		cout<<\n\n<<"ENTER CHOICE(0-4)\n\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				display(data,n);
				break;
			case 2:
			cout<<"ENTER ACCOUNT NUMBER TO SEARCH\n";
			cin>>account_no;
			index=search(data,n,account_no);
			if(index==-1)
			{
				cout<<"RECORD NOT FOUND\n";
			}
			else 
			{
				cout<<"A/C NUMBER\t\t\t"<<name;
				cout<<"BALANCE:\t\t"<<data[index<<account_no.data[index].name<<data[index].balance<<endl;
			
			}
			
			break;	
			case 3:
				cout<<"ENTER ACCOUNT NUMBER "<<endl;
				cin>>account_no;
				cout<<"ENTER AMOUNT TO DEPOSIT:"<<endl;
				cin>>amount;
				deposit(data,n,account_no,amount);
				break;
			case 4:
			     cout<<"ENTER ACCOUNT NUMBER:"<<endl;
				 cin>>account_no;
				 cout<<"ENTER AMOUNT TO WITHDRAW:"<<endl;
				 cin>>amount;
				 withdraw(data,n,account_n,amount);	
			case 0:
				
				
		}
	 } 
	 while(choice!=0)
	 return 0;
}
void accept(struct customer[],int)
{
	for(int i=0;i<5;i++)
	{
		cout<<\n<<"ENTER DATA FOR RECORD"<<i+1<<endl;
		cin>>list[i].account_no;
		cout<<"ENTER NAME: \n\n";
		gets(list[i].name);
		list[i].balance=0;
		
	}
}
void display(struct customer[],int)
{
	cout<<"A\C NO:"<<name<<endl;
	cout<<"\tBALANCE"<<\n<<endl;
	for(int i=0;i<5;i++){
		
		
	}
}
void deposit(struct customer[],int,int,int)
void search(struct customer[],int,int)
void withdraw(struct customer[],int,int,int)

