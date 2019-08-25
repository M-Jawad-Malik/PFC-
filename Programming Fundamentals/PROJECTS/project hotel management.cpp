#include<iostream>
using namespace std;
void management()
{int check_inyear,check_inmonth,check_indate;
char choice;
string roomtype,room_charge;
cout<<"WHAT DO YOU WANTS:"<<endl;
cout<<"                  1.Add New Custumer"<<endl;
cout<<"                  2.Making Bill of Old Costumer"<<endl;
cout<<"                  3.Quit"<<endl<<endl;
while(true)
{
	
cout<<"                    Plz Enter Your Choice = ";
cin>>choice;
if(choice=='1')
{


cout<<"\n Enter check in date";

	cout<<"\n--------------------";
	cout<<"\nYEAR:";
	cin>>check_inyear;
	cout<<"\nMONTH:";
	cin>>check_inmonth;
   
  
  
	if(check_inmonth>12)
	{
		cout<<"Invalid no of month, Enter Month Again plz = ";
	cin>>check_inmonth;
	}

	
	cout<<"\nDATE:";
	cin>>check_indate;
		if(check_indate>31)
	{
		cout<<"Invalid Date, Enter Date Again plz = ";
	cin>>check_indate;
	}
	
    cout<<"Room Catagory:"<<endl;
	cout<<"              1-Single Bed:"<<endl;
	cout<<"              2-Double Bed:"<<endl;
	cout<<"              3-Quad:" <<endl;
	cout<<"              4-Queen:"<<endl;
	cout<<"              5-King:"<<endl; 
	cout<<"              6-Deluxe:"<<endl;
	cout<<"              7-Premier:"<<endl;
	cout<<"\nEnter room type:";
	cin>>roomtype;
	
	cout<<"\nenter room charge:";
	cin>>room_charge;
}
    else if (choice=='2')
    {
    	int a,b,c,d,e,f,g,h,n;120,100,60,50,100,150,300;
	cout<<"MENU"<<endl;
	cout<<"1-zinger burger=120"<<endl;
	cout<<"2-chips=100"<<endl;
	cout<<"3-kabab=60"<<endl;
	cout<<"4-shawarma=50"<<endl;
	cout<<"5-grill kabab=100"<<endl; 
	cout<<"6-ice cream=150"<<endl;
	cout<<"7-chicken grill burger=300"<<endl;
	cout<<"ENTER NO OF ORDER=";
	cin>>a;
	cout<<"enter quantity=";
	cin>>n;
	
	if(a==1)
   { b=120*n;
    cout <<"total bill="<<b;
	}
	 else if(a==2)
	{ c=100*n;
		cout<<"total bill="<<c;
	}
     else if(a==3)
     { d=60*n;
     	cout<<"total bill="<<d;
	 }
	 else if(a==4)
	 { e=50*n;
	 	cout<<"total bill="<<e;
	 }
	 else if(a==5)
	 { f=100*n;
	     cout<<"total bill="<<f; 	
	 }
	 else if(a==6)
	 { g=150*n;
	 		cout<<"total bill="<<g;
	 }
	 else if(a==7)
	 { h=300*n;
	 	cout<<"total bill="<<h<<endl;
	 	cout<<"ENJOY YOUR FOOD";
	 }
	}

	 else if(choice== '3') 
		{
			cout<<"        ' Program Ended '";
			break; 
		}

		cout << "\n"; 
}

}
	
	

int main()
{    string password;
		cout<<"\n                                                        Pearl Continental Hotel";
	cout<<"\n                                                    __________________________________";
	cout<<"\n                                                            Lahore , punjab";
	cout<<"\n                                               ----------------------------------------------"<<endl<<endl<<endl;
    cout<<"                                                              LOGIN SCREEN\n";
    cout<<endl<<endl<<endl;
	cout<<"                                                               ADMINISTER  "<<endl;
	cout<<"                 ENTER PASSWORD:";
	cin>>password;
	if(password=="lgulahore123")
	{
		cout<<"                                                           SUCCESSFUL"<<endl<<endl;
		system("pause");
    start:
	system("cls");
	management();
	}
	else 
	{
		cout<<"               Wronge Password! "<<endl;
		cout<<"               Please Enter Password Again:"; 
		cin>>password;
		if(password=="lgulahore123")
	{
			management();}
		system("pause");
}}

