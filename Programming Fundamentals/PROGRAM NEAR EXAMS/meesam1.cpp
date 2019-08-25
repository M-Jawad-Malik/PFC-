#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string name,age,rollno,major,sem,sec;
    ifstream ifi;
    ifi.open("SYEDA_MUNAWAR.txt");
    ifi>>name>>age>>rollno>>major>>sem>>sec;
    cout<<"Student's Name:"<<name<<endl;
	cout<<"Student's Age:"<<age<<endl;
	cout<<"Student's RollNo:"<<rollno<<endl;
    cout<<"Student's Major:"<<major<<endl;
    cout<<"Student's Semester:"<<sem<<endl;
    cout<<"Student's Section:"<<sec<<endl;
  
    ifi.close();
    return 0;
}
