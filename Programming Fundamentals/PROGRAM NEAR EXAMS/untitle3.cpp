#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string name,age,rollno,major,sem,sec;
	ofstream i;
	i.open("haseeb.txt");
	cout<<"Enter Your Name:";
	cin>>name;
	cout<<"Enter Your Age:";
	cin>>age;
	cout<<"Enter Your RollNo:";
	cin>>rollno;
    cout<<"Enter Major:";
    cin>>major;
    cout<<"Enter Semester:";
    cin>>sem;
    cout<<"Enter Your Section:";
    cin>>sec;
    i<<name<<endl<<age<<endl<<rollno<<endl<<major<<endl<<sem<<endl<<sec;
    i.close();
    return 0;
    
		
}
