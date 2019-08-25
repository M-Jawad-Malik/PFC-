#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int flag=0;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter age of person = ";
		cin>>a[i];
}for(int i=0;i<10;i++){

		if(a[i]>50&&a[i]<60)
		{
			flag=flag+1;
			
		}
	}
	cout<<"Total no of persons between 50 and 60 age = "<<flag;
	return 0;
}
