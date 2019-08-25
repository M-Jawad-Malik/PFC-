#include<iostream>
#include<math.h>

using namespace std;
void l()
{
	cout<<"enter length ";
	
}
void w()
{
	cout<<"enter width ";
}

int door(int a3[],int l3[],int w3[],int n3,int sum3,char z)
{
	cout<<"Is there any door in room (y/n) = ";
	cin>>z;
	switch(z)
{


	case'y':

    {
	
	 cout<<"Enter no of Door in room = ";
	cin>>n3;
	
	
	for(int i=1;i<=n3;i++)
	{
		l();
		cout<<"Of Door "<<i<<" = ";
		cin>>l3[i];
		w();
		cout<<"Of Door "<<i<<" = ";
		cin>>w3[i];
		a3[i]=l3[i] * w3[i];
		cout<<"Area of Door "<<i<<" = "<<a3[i]<<endl<<endl;
	
	    sum3=sum3+a3[i];
		cout<<"TOTAL AREA OF "<<i<<" DOORS = ";

		}
	
		break;
	}
		case'n':
		{
		
		
		break;
		}}
		return(sum3);
}
int main()
{int n3;
int a3[n3],l3[n3],w3[n3];

int sum3=0;
char z;
cout<<door(a3,l3,w3,n3,sum3,z);
	return 0; 
}
