#include<iostream>
using namespace std;
int main()
{
	int size,a[size],i,t,f;
	cout<<"enter size of array= ";
	cin>>size;

	cout<<"enter element of array="<<"\n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
		
	}
	cout<<endl;
	t=(size/2);
	f=(size/2)-1;
	
	 for(i=f;i<=t;i++){
		 
			if(size%2==0)
		{   
			cout<<"middle elements are  "<<a[i]<<"\n";
	}
	
	else 
	{ cout<<"middle element is  "<<a[t]<<"\n";
}
}
}
