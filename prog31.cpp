/*
	Program to writes Student records to a data file.
*/
#include<iostream>
#include<fstream>
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
	student s[10];	//creating array of student class
	int i=1,ch;
	string  data;

	ofstream fout;	//for writting data to file
	ifstream fin;	//for reading data from file
	
	//creating and initializing file
        fout.open("student.dat");       //opening file
        fout<<"Roll no |  Name"<<endl;          //initializing file
        fout.close();

	
	while(1)
	{
		cout<<"1. Add record"<<endl;
		cout<<"2. View record"<<endl;
		cout<<"3. Exit "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: {
				 s[i].setData();                //getting data
                                 fout.open("student.dat",ios::app);     //opening file in append mode
                                 fout<<s[i].roll<<" | ";                //entering data to file'
                                 fout<<s[i].name<<endl<<endl;
                                 fout.close();
                                 i++;
					
				}				
			break;
			case 2:{
				 cout<<"\n\n ******  student record file data ******"<<endl;
					fin.open("student.dat");
				 while (fin) { 
				     // Read a Line from File 
					std::getline(fin, data); 
			       	     // Print line in Console 
					cout << data << endl; 
			   	  }
				 fin.close();
				} 
			break;
			case 3: exit(0);
				break;
			default: cout<<"\n Wrong choice"<<endl;
	
		} 
	}

	return 0;
}
