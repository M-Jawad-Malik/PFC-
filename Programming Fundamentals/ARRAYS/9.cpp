#include<iostream>
using namespace std;
int main()
{
	int size,a[size],b[size],max1,max2,pos;
	cout<<"enter size of both arrays = ";
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		cout<<"enter elements of array a = ";
		cin>>a[i]; 
	 } 
	
	 
	 max1=a[0];
	 for(int i=0;i<size;i++)
	 {
	 	if(a[i]>max1)
	 	{
	 		max1=a[i];
		 }
		 
		 
	 }
	 cout<<"Maximum in array a ="<<max1<<endl;
	
	  for(int i=0;i<size;i++)
	 {
	 	 cout<<"enter elements of array b = ";
		 cin>>b[i]; }
	 cout<<"enter position at which to insert max of array a in array b =";
	 cin>>pos;
	 for(int i=size;i>pos;i--)
	 {
	 	b[i]=b[i-1];
	 }
	 b[pos]=max1;
	
	 for(int i=0;i<size+1;i++)
	 {  
	 	 cout<<"elements of array b after insertion= "<<b[i]<<endl;
	 }
	 max2=b[0];
	 for(int i=0;i<size;i++)
	 {
	 	if(b[i]>max2)
	 	{
	 		max2=b[i];
		 }
		 
		  
	 }
	 cout<<"max in array b ="<<max2;              }
