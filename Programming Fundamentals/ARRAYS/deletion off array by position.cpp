#include <iostream>
using namespace std;
int main(){
	int size;
	int a[5],pos,flag=0;
	
	for(int i=0;i<5;i++){
		cin>>a[i];}
	
	cout<<"enter pos to delete";
	cin>>pos;
	for(int i=0;i<5;i++){
	
	if(a[i]==a[pos]){
		for(int j=i;j<5-1;j++){
			a[j]=a[j+1];
			
		}
		flag++;
		break;
	}
	}
	if (flag==1){
	cout<<"deletion succesfull"<<endl;
		for(int i=0;i<5-1;i++){
			cout<<a[i];
		}
	}
		else{
		
			cout<<"position  doesnot exist";
		}
		return 0;
}

