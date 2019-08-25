#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class bank
{
	private:
	int ac_no,account;
	float balance;
	char name[20];
	public:
	void open(void);
	void deposit(int);
	void withdraw(int);
	void search(int);
	void display(void);
		
};
void bank::open(void)
{
	cout<<"Enter your name:";
	cin>>name;
	cout<<"enter your account number:";
	cin>>account;
	cout<<"enter the amount of money:";
	cin>>balance;
	
}
void bank::deposit(int j)
{
	int bnc;
	if(account==1)
{
	cout<<"enter the amount of money:";
	cin>>bnc;
	balance=balance+bnc;
	cout<<"\n\n\tJOB HAS DONE WELL!!!\n";
	
}
}
void bank::withdraw(int k)
{
	int blnc,p;
	if(account==k)
	{
		cout<<"YOUR CURRENT BALANCE IS"<<balance<<"\n"<<"yhe amount of money you withdraw";
		cin>>blnc;
		p=balance-blnc;
		{
			if(p<0)
			cout<<"sorry!!! there is not enough money in your account";
			else if(p>=0)
			{
				cout<<"\n\tYOUR REQUEST TO WITHDRAW MONEY HAS DONE\n\n";
				balance=p;
			}
			
		}
	}
}
void bank::display(void)
{
	cout<<"\n\nNAME"<<name<<"\n\nACCOUNT NO"<<account<<"\n\nBALANCE:"<<balance<<"\n\n";
}
void bank::search(int m)
{
	if(account==m)
	{
		cout<<"\n\n*************ACCOUNT HOLDERS INFO*******";
		cout<<"\n\nNAME:"<<name<<"\n\nACCOUNT NO"<<account<<"\n\nBALANCE:"<<balance<<"\n\n";
		cout<<"\n**********************\n\n";
		
	}
}
int main()
{
	int i,j,k,m,l,y=0;
	bank b[20];
	int index;
textcolor(0);
textbackground(4);
	
	clrscr();
	do
	{
		cout<<"\a\nPRESS 1 TO OPEN ACCOUNT\n\n"<<"press 2 to deposit amount\n\n"<<"press 3 to withdraw money\n\n"<<"press 4 to display\n\n"<<"press 5 to search\n\n"<<"press 6 to exit\n\n\t";
		cout<<"YOUR OPTION...........";
		cin>>index;
		switch(index)
		{
			case 1:
				cout<<"how many account you want to open?\n";
				cin>>y;
				for(i=0;i<y;i++)
				b[i].open();
				break;
				case 2:
					cout<<"\nENTER YOUR ACCOUNT NO.";
					cin>>j;
					for(i=0;i<y;i++)
					{
						b[i].deposite(j);
						
					}
					break;
					case 3:
						cout<<"\nenter your account no.";
						cin>>k;
						for(i=0;i<y;i++)
						{
							b[i].withdraw(k);
							
						}
						break;
						
						case 4:
							for(i=0;i<y;i++)
							{
								b[i].display();
								
							}
							break;
							case 5:
								cout<<"enter your account number.";
								cin>>m;
								for(i=0;i<y;i++)
								{
									b[i].search(m);
									
								}
								break;
								case 6:
									break;
									default:cout<<"\nYOU HAVE PRESSED THE WRONG KEY";
									break;
									
		}
		while(index!=6);
	}
	
}
