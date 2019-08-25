#include<iostream>
using namespace std;
int main()
 {
 	int size;
int a1[size],i;
int even,odd;
cout<<"enter size of array";
cin>>size;

  
for( i=0;i<size;i++)
{
	cout<<"enter element of array =";
	cin>>a1[i];
	cout<<endl;}
	even=(size/2);
odd=(size/2)-1;
for(i=odd;i<=even;i++){

if(size%2==0){
	cout<<"middle element is ="<<a1[i]<<endl;
}
else
   {
   	cout<<"middle element is ="<<a1[even];
   	break;
   }

}
return 0;
}


