/*
	Program writes Student records to a data file. Read records based on name entered.
*/
#include<iostream>
#include<fstream>
#include<cstring>
#include<regex>
using namespace std;

class student 
{
	public:
		int roll;
		char name[30];
		
		void setData()
		{
			cout<<"Enter Roll no:- ";
			cin>>roll;
			cout<<"\nEnter Name:- ";
			cin>>name;	
		}
};
int main()
{	
	student s[10];
	int i=1,ch;
	string data;
	bool found=false;
	char data2[400];	
	char uname[30];		//search record var
	
		
	ofstream fout;	//for writting data to file
	ifstream fin;	//for reading data from file

	//creating and initializing file
	fout.open("student.dat");	//opening file
	fout<<"Roll no |  Name"<<endl;		//initializing file
	fout.close();

	//ui interface
	while(1)
	{
		cout<<"1. Add record"<<endl;
		cout<<"2. View record"<<endl;
		cout<<"3. Exit"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:{
				
				 s[i].setData();		//getting data
				 fout.open("student.dat",ios::app);	//opening file in append mode
				 fout<<s[i].roll<<" | ";		//entering data to file'
				 fout<<s[i].name<<endl<<endl;	
				 fout.close();
				 i++;
				}
			break;
			case 2:{	 
					cout<<"\n\n ********** student record *********"<<endl;
					cout<<"Enter Name to view record:- "<<endl;
					cin>>uname;	//for searching record
					
					regex exp(uname);	//for pattern matching
					
					fin.open("student.dat");					

					//reading file
					while(fin)
					{
						//Read a line form file
						getline(fin,data);
						strcpy(data2,data.c_str());	//converting string to char
						//matching records
						if(regex_search(data2,exp))
						{	found = true;			
							// Print line in console
							cout<<"Roll no:- "<<strtok(data2,"|")<<endl;
							cout<<"Name:- "<<strtok(NULL,"|")<<endl;
						}
					}
					if(found==false)
					{
						cout<<"No record found";
						
					}

					fin.close();
					found = false;
				}
				
			break;
			
			case 3: exit(0);
			break;
			
			default: cout<<"\n Wrong choice"<<endl;
		}
		cout<<"\n\n\n";
	}
	

	return 0;
}

