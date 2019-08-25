#include<iostream>
#include<math.h>
using namespace std;
int main()
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
	 return 0;
}
