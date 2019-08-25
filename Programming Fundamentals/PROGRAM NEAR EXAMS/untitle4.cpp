#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string name,age,rollno,major,sem,sec;
    ifstream ifi;
    ifi.open("haseeb.txt");
    ifi>>name>>age>>rollno>>major>>sem>>sec;
    cout<<"Enter Your Name:"<<name<<endl;
	cout<<"Enter Your Age:"<<age<<endl;
	cout<<"Enter Your RollNo:"<<rollno<<endl;
    cout<<"Enter Major:"<<major<<endl;
    cout<<"Enter Semester:"<<sem<<endl;
    cout<<"Enter Your Section:"<<sec<<endl;
  
    ifi.close();
    return 0;
}
