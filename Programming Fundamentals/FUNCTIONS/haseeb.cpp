#include <iostream>
using namespace std;
int main(){
	int l,w,area,nd1,ld1,wd1,nwin,lwin,vwin,ad1,awin,add_d1=0,add_w1=0,sum1,total=0;
	cout<<"enter lenght of room :"<<endl;
	cin>>l;
	cout<<"enter width of room :"<<endl;
	cin>>w;
	area=l*w;
	cout<<"area of room is :"<<area<<endl;
	cout<<"enter no of doors :"<<endl;
	cin>>nd1;
	cout<<"enter no of windows :"<<endl;
	cin>>nwin;
	if (nd1>0 && nwin>0){
	for (int i=0;i<nd1;i++){
	
	cout<<"lenght of door is : "<<endl;
	cin>>ld1;
	cout<<"width of door is : "<<endl;
	cin>>wd1;
	ad1=ld1*wd1;
	cout<<"area of doors :"<<ad1<<endl;
	add_d1=add_d1+ad1;}
	cout<<"area of total doors are = "<<add_d1<<endl;
	
		
		
		for (int i=0;i<nwin;i++){
		cout<<"lenght of windows : "<<endl;
		cin>>lwin;
		cout<<"width of windows : "<<endl;
		cin>>vwin;
		awin=lwin*vwin;
		cout<<"area of window is : "<<awin<<endl;
		add_w1=add_w1+awin;
	}
	cout<<"total area of windows are : "<<add_w1<<endl;
	sum1=add_d1+add_w1;
	cout<<"sum of areas of doors and windows : "<<sum1<<endl;
	total=area-sum1;
	cout<<"total area of room is : "<<total;
}
return 0;
}
