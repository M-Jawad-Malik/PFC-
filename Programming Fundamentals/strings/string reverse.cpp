#include<iostream>
#include<string.h>
using namespace std;
void reverse()
{string a; 
 char arr[100];
   cout<<"Enter a string to reverse: ";
   gets(arr);
  a=strrev(arr);
   cout<<"Reverse of the string is:"<<a;
             }
int main()
{
	reverse();
	return 0;
			 }             
