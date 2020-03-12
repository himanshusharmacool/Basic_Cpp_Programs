/*
	Program to show the working of a class Student add functions to read and show details.
*/
#include<iostream>
using namespace std;

//global variable
int i=0;

class student
{
	private:
 		int roll[20];
		char name[20][20];
	public:
		void read()
		{
			cout<<"Enter roll no:- ";
			cin>>roll[i];
			cout<<"Enter name:- ";
			cin>>name[i];
			i++;
		}
		
		void show()
		{	int j;
			cout<<"Roll no \t name"<<endl;
			for(j=0;j<i;j++)
			{
				cout<<roll[j]<<"\t"<<name[j]<<endl;
				
			}
		}
};
int main()
{	
	student s;
	int choice;
	char ch;

	while(1)
	{
		system("clear");
		cout<<"********menu**********"<<endl;
		cout<<"1. Enter value "<<endl;
		cout<<"2. View value "<<endl;
		cout<<"3. Exit"<<endl;
		cout<<"Enter your choice:- ";
		cin>>choice;

		switch(choice)
		{
			case 1: s.read();
				break;
			case 2: s.show();
				break;
			case 3: exit(0);
				break;
			default: cout<<"Wrong Input";		
		}	
		
		cout<<"Do you want to continue(y/n) :- ";
		cin>>ch;
		
		if(ch=='n')
		{
			exit(0);	
		}
		
	}
	return 0;
}
