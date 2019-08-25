#include<iostream>
using namespace std;
int swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return (*x,*y);
}
int main(){
	int a=100,b=200;
	swap(&a,&b);
	cout<<a<<endl<<b;
	return 0;
}
