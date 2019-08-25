#include<string>
#include<iostream>
using namespace std;
const int len=50;
class Employee
{
protected:
	char name[len];
	int emp_id;
	public:
		void setvalue()
		{
			cout<<"ENTER NAME OF EMPLOYEE : ";
			cin>>name;
			cout<<"ENTER EMPLOYEE ID : ";
			cin>>emp_id;
		
		}
			void display()
			{
				cout<<"EMPLOYEE NAME : "<<name<<endl;
				cout<<"EMPLOYEE ID : "<<emp_ id<<endl;
				
			}
	
};
class School
{
	protected:
		char uni[len];
		char degree[len];
	public:
	void setvalue()
	{
		cout<<"ENTER UNIVERSITY NAME : ";
		cin>>uni;
		cout<<"ENTER DEGREE TITLE : ";
		cin>>degree;
		
		}
	void display()
	{
		cout<<"UNIVERSITY NAME : "<<uni<<endl;
		cout<<"DEGREE TITLE : "<<degree<<endl;
		
			}		
};
class manager:public Employee,public School
{
char title[50];
double dues;
public:
void setvalue()
{
	Employee::setvalue();
	cout<<"ENTER TITLE : ";
	cin>>title;
	cout<<"ENTER DUES : ";
	cin>>dues;
	School::setvalue();
	}	
void display()
{
	Employee::display();
	cout<<"TITLE : "<<title<<endl;
	cout<<"DUES : "<<dues<<endl;
	School::display();
	
	}	
};
int main()
{
	manager man;
	man.setvalue();
	man.display();
	return 0;
}
