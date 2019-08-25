#include<iostream>
using namespace std;
int main()
{
int a,fac,num;
cout<<"Enter any Number: ";
cin>>num;
fac=1;
for(a=1;a<=num;a++)
{	
	fac=fac*a;
   }
cout<<"Factorial="<<fac<<endl;
 return 0;

}

