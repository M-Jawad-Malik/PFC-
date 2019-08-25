#include<iostream>
using namespace std;
int main(){
	int a[10],i,j,z,b,n;
	int c[10];
	cout<<"enter number :";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];}
		cout<<"our prime numbers are :"<<endl;
	    for( i=1;i<n;i++){
	    		c[i]=a[i];
		z=0;
		for( j=2;j<a[i];j++){
			b=a[i]%j;
			
			if (b==0){
			
				z=1;
				break;
			
		}
				
			}if(z==0){
			
		cout<<c[i]<<endl;}
}
		
	return 0;
}
	

