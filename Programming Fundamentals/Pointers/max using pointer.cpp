#include<iostream>
using namespace std;
int main()
{
 int *a,*b,*c,max=0;
 cout<<"Enter firts num:"<<endl;
 cin>>*a;
 cout<<"Enter firts num:"<<endl;
 cin>>*b;
 cout<<"Enter firts num:"<<endl;
 cin>>*c;
 if (*a>*b && *a>*c)
 {
 	max=*a;
 }
  if (*b>*a && *b>*c)
 {
 	max=*b;
 }
 if (*c>*a && *c>*b)
 {
 	max=*c;
 }
cout<<"Max number="<<max;
return 0;
}
