#include<iostream>
using namespace std;
int main(){ 
	int ar[3][2];
	int a,i,j,count=0,row,col;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			cout<<"enter elements of an array =";
			cin>>ar[i][j];
			cout<<endl;
		}
	}
	cout<<"enter element to be found "<<endl;
	cin>>a;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			if (a==ar[i][j]){
				count=1;
				row=i;
				col=j;
				break;
			}
		}
	}
	if (count==1){
	 cout<<"element found at position \nrow="<<row<<"and coloumn ="<<col;
	 }
	 else
	 {
	 	cout<<"element not found at given position";
	 }
	 return 0;
}
