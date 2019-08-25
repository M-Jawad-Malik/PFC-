#include<iostream>
#include<string>
#define H_M
#define H_M
#include<iomanip>
#include<iostream>
#include<fstream>
#include<conio.h>
#include<math.h>
#include<time.h>
using namespace std;
int main()
{

class customer
{
	public :
		int custm_id;
		int custm_age;
		int check_inyear;
		int check_inmonth;
		int check_indate;
		char roomtype[20];
		char custm_name[30];
		int room_charge;
		int compare(char[]);
		char custm_occuption[20];
		void getdata();
		void putdata();
		long total;
		int food;
		long room;
		float ser;
		int t;
		int oc;
		int r_day;
		
		public:
			void welcomescreen();
			void login_screen();
			void add_customer();
			void delete_customer();
			void update_customer();
			void search_customer();
			void main_screen();
			void display_customer();
			void checkout_customer();
			void room_detail();
			void generate_bill();
			void room_bill();
		}	


cout<<"\n enter check in date";

	cout<<"\n--------------------";
	cout<<"\nYEAR:";
	cin>>check_inyear;
	cout<<"\nMONTH:";
	cin>>check_inmonth;
	cout<<"\nDATE:";
	cin>>check_indate;
	cout<<"\nenter room type:";
	cin>>roomtype;
	cout<<"\nenter room charge:";
	cin>>room_charge;
	if((check_inmonth==2)&&(check_indate>29))
	{
		cout<<"wrong input!!!!\n";
		cout<<"\nenter the date again...\n";
		goto START:
	}
	if((check_inmonth==4||check_inmonth==6||check_inmonth==9||check_inmonth==11)&&(check_indate>30))
	{
		cout<<"wrong input!!!!!\n";
		cout<<"\nenter the date again...\n";
		goto START;
	}
	if((check_inyear%4)!=0&&(check_inmonth==2)&&(check_indate>28))
	{
		cout<<"wrong input!!!\n";
		cout<<"\nenter the date again....\n";
		goto START:
	}
	cout<<"\t\t\t\tUser name=";
	cin>>username;
	if(strcmp(username,"admin")==0)
	{
		string pass="";
		char ch;
		cout<<"\n\t\t\t\tPASSWORD=";
		ch=_getch();
		while(ch!=13)
		{
			pass.push_back(ch);
			cout<<'*';
			ch=_getch();
			
		}
		if(pass=="admin")
		{
			cout<<"\n\t\t"<<"access granted";
			do
			{
			
		}
	}
	void customer::welcomescreen()
	{
		system("cls");
		cout<<endl<<endl<<endl<<<endl;
		cout<<" COMPUTRISED MANAGEMENT SYSTEM "<<endl;
		cout<<"BY ALL GROUP MEMBRS(GROUP WORK)"<<endl;
		cout<<"ALHAMDULILAH";
		cout<<"SUBMITTED BY:GROUP 2"<<endl;
		cout<<"SUBMITTED TO RESPECTED MS MEHREEN QAMAR";
		getch();
		
	}
	void customer::login_screen()
	{
		time_tt;
		system(cls);
		t=time(null);
		cout<<"\n"<<ctime(&t);
		customer c;
		t-=24L*60L*60L;
		char choice;
		cout<<endl<<endl<<endl<<endl;
		cout<<"  LOGIN SCREEN\n";
		cout<<"________________________"<<endl;
		cout<<"1 ADMINISTRATOR LOGIN\n";
		cout<<"2.customer login\n";
		cout<<"3.EXIT\n";
		cout<<"\n\n\n";
		cout<<"enter choice::";
		cin>>choice;
		switch(choice)
		{
			case'1':
				system("cls");
				c.main_screen();
				break;
				case '2':
					search_customer();
					break;
					case '3':
						exit(0);
						break;
						default:
							cout<<"wrong choice entered";
							
		}
	}
	void customer::add_customer()
	{
		customer c;
		ofstream outf;
		outf.open("customer.txt",ios::out|ios::app|ios::binary);
		c.getdata();
		outf.write((char*)&c,sizeof(c));
		outf.close();
		_getch();
		
	}
	void customer::search_customer()
	{
		fstream file;
		customer c;
		int i=1;
		char nam[25];
		file.open("customer.txt",ios::in);
		cout<<"\t\t\t customer detail\n";
		cout<<"\t\t\t______________________\n\n";
		cout<<"\t\t\t\t\n Enter name to search:";
		cin>>name;
		file.seekg(0,ios::beg);
		while(file.read((char*)&c,sizeof(customer)))
		{
			if(c.compare(nam))
			{
				cout<<"\t\t\\t custm_id"<<""<<"custm_name\n"<<endl;
				cout<<"  "<<c.custm_id<<"  "<<c.custm_name;
				cout<<"\n\t\t\t_______________________";
				cout<<"\n\t\t\t  ....THANK YOU FOR USING...";
				i=0;
				break;
				 
			}
		}
		file.close();
		if(i)
		{
			cout<<"sorry!!!!record not found";
			
		}
getch();		
	}
	void customer::delete_customer()
	{
		fstream file;
		fstream temp;
		temp.open("tempdata.txt",ios::out);
		customer c;
		int i=1;
		char nam[25];
		file.open("customer.txt",ios::in);
		cout<<"\t\t\t\t ALL customer detail\n";
		cout<<"\t\t\t___________________\n\n";
		cout<<"\t\t\t\t\t\n Enter name to search:";
		cin>>nam;
		file.seekg(0,ios::beg);
		while(file.read((char*)&c,sizeof(customer)))
		{
			if(!c.compare(nam))
			{
				cout<<"\t\t\t\t custm_id"<<" "<<"custm_name\n"<<endl;
				cout<<" "<<c.custm_id<<" "<<c.custm_name;
				i=0;
				temp.write((char*)&c,sizeof(customer));
				
			}
		}
		file.close();
		temp.close();
		remove("customer.txt");
		rename("tempfile.txt","customer.txt");
		getch();
		
	}
	void customer::checkout_customer()
	{
		system("cls");
		cout<<"\n\t\t\t____________________"<<endl;
		cout<<"\n\t\t\t\t HOTEL MANAGEMENT SYSTEM"<<endl;
		cout<<"\t\t\t\t________________________\n\n"<<endl;
		cout<<"\t\t\t ALL customers detail\n";
	}
	{
		system("cls");
		cout<<"\n\\t\t\t__________________\n"<<endl;
		cout<<"\n\t\t\t\tHOTEL MANAGEMENT SYSTEM"<<endl;
		cout<<"\n\t\t\t____________________\n"<<endl;
		cout<<"\t\t\t\tALL CUSTOMER DETAIL\n";
		cout<<left<<setw(10)<<left<<setw(15)<<"room_charge"<<endl;
	}
	class Generatebill:public customer
	{
		public:
			int r_charge;
			char custm_name[25];
			char b;
			public:
				void calculate()
				{
					system("cls");
					cout<<"\nEnter Room Type:";
					cout<<"\nSelect 1 for Super luxary\nSelect 2 for luxary\n3 for Delux\n";
					cin>>b;
					if(b=1)
{
	r_charge=4000;
				}
				else
				if(b=2)
				{
					r_charge=3000;
								}				}
								else
								
								if(b=3)
								{
									r_charge=2000;
								}
								else{
									cout<<"\n WRONG CHOICE...";
									cout<<"\nEROOR: Room is not allocated.";
									cout<<"\n Bill cannot be generated";
									
								}
								cout<<"\n Enter the bill amount of restaurant:";
								cin>>food;
								cout<<"\n Enter other charges:";
								cin>>oc;
								cout<<"\n Enter customer name:";
								cin>>custm_name;
								cout<<"\n Enter number of days:";
								cin>>r_day;
								room=r_charge*r_day;
								t=(int)room+food+oc;
								ser=(int)(0.05*t);
								total=t+ser;
								
	}
void display_bill()
{
	system("cls");
	cout<<"\n______________________________________________";
	cout<<"\n Pearl Continental Hotel    ";
	cout<<"\n__________________________________";
	cout<<"\n Lahore , punjab";
	cout<<"\n----------------------------------------------";
	cout<<"\n Customer name:"<<custm_name;
	cout<<"\n";
	cout<<"\n  Stayed for"<<r_day<<"days";
	cout<<"\n  Room charges:"<<r_charge<<"per day";
	cout<<"\n Room charges:"<<room<<"total";
	cout<<"\n Restaurant bill:"<<food;
	cout<<"\n Other charges:"<<oc;
	cout<<"\n  Ser.tax %=5%";
	cout<<"\n Ser.tax="<<ser;
	cout<<"\n Bill Amount >>>>>>> RS"<<total;
	cout<<"\n      ";
	cout<<"\n THANK YOU!!!!!!!!!!!!!!";
	cout<<"\n VISIT AGAIN!";
	}	
};
void customer::generate_bill
{
	Generatebill b;
	b.calculate();
	b.display_bill();
}}
