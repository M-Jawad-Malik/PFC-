#include<iostream>
using namespace std;
int main()
{
	char ch,i;
	cout<<"enter alphabet=";
	cin>>ch;
	if(ch>='a' && ch<='z')
	{
		cout<<ch<<"  is lower case"<<endl;
		
	}
	else if(ch>='A' && ch<='Z')
	{
		cout<<ch<<" is upper case";
	}
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	cout<<ch<<" is vowel word"<<endl;
	for(i='a';i<=ch;i++)
{
		cout<<i<<endl;}
	return 0;
}
