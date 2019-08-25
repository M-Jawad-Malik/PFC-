#include<iostream>

#include<fstream>
#include<string.h>
using namespace std;
void man()
{
	//printing the welcome note


cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
system("pause");
system("cls");


\
}
void option()
{//giving option to the user for their choice

char i;
   string name[100];
                            int patient_id;
                            string address[100];
                            string contact[100];
                            string age[100];
                            string sex[100];
                            string blood_gp[100];
                            string disease_past[100];
                            string id[100];
b:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
cout<<"\t\t\t\t\t\t|             2  >> Add Diagnosis Information                     |\n";
cout<<"\t\t\t\t\t\t|             3  >> Full History of the Patient                   |\n";
cout<<"\t\t\t\t\t\t|             4  >> Information About the Hospital                |\n";
cout<<"\t\t\t\t\t\t|             5  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>i;
if(i=='1')
{
	
                         

            
             cout<<"ENTER PATIENT ID = ";
            cin>>patient_id;
			
            cout<<"_________________________________________________________________________________patient_file__________________________________________________________________";
            cout<<endl;
           
			cout<<"                   Name : ";
            cin>>name[patient_id];
            cout<<"                   Address : ";
            cin>>address[patient_id];
            cout<<"                   Contact Number : ";
            cin>>contact[patient_id];
            cout<<"                   Age : ";
            cin>>age[patient_id];
            cout<<"                   Sex : ";
            cin>>sex[patient_id];
            cout<<"                   Blood Group : ";
            cin>>blood_gp[patient_id];
            cout<<"                   Any Major disease suffered earlier : ";
            cin>>disease_past[patient_id];
            
            cout<<"\nInformation Saved Successfully\n";
             

    system("pause");
  system("cls");
  goto b;
            }
            else if(i=='2')
            {
            	                char symptom[500];
                                char diagnosis[500];
                                char medicine[500];
                                char addmission[30];
                                char ward[15];
                    
            cout<<"                   Symptoms : ";
            cin>>symptom;
            cout<"                    Diagnosis : ";
            cin>>diagnosis;
            cout<<"                   Medicines : ";
            cin>>medicine;
            cout<<"                   Addmission Required? : ";
            cin>>addmission;
            cout<<"                   Type of ward : ";
            cin>>ward;
            cout<<"                   ward is alloted Successfully";
			cout<<"\n\n";
			system("pause");
            system("cls");
			goto b;
			
			}
  




else if(i=='3')
{
	
                            
                            int patient_id;
						
                          
                            cout<<"_________________________________________________________________________________patient_file__________________________________________________________________";
            cout<<endl;
            cout<<"ENTER PATIENT = ";
            cin>>patient_id;
			cout<<"                   Name : "<<name[patient_id]<<endl;
            cout<<"                   Address : "<<address[patient_id];
            cout<<"                   Contact Number : "<<contact[patient_id];
            cout<<"                   Age : "<<age[patient_id]<<endl;
            cout<<"                   Sex : "<<sex[patient_id];
            cout<<"                   Blood Group : "<<blood_gp[patient_id]<<endl;
            cout<<"                   Any Major disease suffered earlier : "<<disease_past[patient_id];
             system("PAUSE");
      system("CLS");
      goto b;                      
		
}
else if(i=='4')
{
cout<<"                                                     CLINIX HOSPITAL";
cout<<endl;
cout<<"                                                       Since 1988";
cout<<endl;
cout<<"                                                     Total patients admitted since 1988 = 1987680";
cout<<endl;
cout<<"                                                     Total deaths since 1988 = 78000";
cout<<"                                                     Total doctors in service = 500";
cout<<endl;

	
}
else if(i=='5')
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                            HOSPITAL MANAGEMENT SYSTEM                                 |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                 -Brought To You by code-projects.org  |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";

}


cout<<"\n";
}

int login(){
   string pass ="";
   char ch[8];
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\t\t\t\tEnter Password: ";
   cin>>pass;
   if(pass == "pass"){
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
int main()
{
	man();
	login();
	option();
	return 0;
}
