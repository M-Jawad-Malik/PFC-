#include <iostream>
using namespace std;
int main(){
	int a[10]={0,1,0,0,1,1,1,0,1,0};
	int temp=0,i,j;
	for( i=0;i<10;i++){
		
	
	for(j=0;j<10-i;j++){
		if (a[j]<a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
for (j=0;j<10;j++){
	cout<<a[j]<<endl;
}
}
