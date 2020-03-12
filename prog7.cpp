/*
	Program to create a structure Student and add functions to read and show details.
*/
#include<iostream>
using namespace std;

//declaring function
void readdata();
void showdata();

//global variables
int i=1;
//creating student structure
struct student
{
	int roll;
	char name[20];
	
}s[10];

int main()
{

	int ch;
	char choice;
	while(1){
		system("clear");
		cout<<"******** Menu *********"<<endl;
		cout<<"1. Enter Student Data "<<endl;
		cout<<"2. View Student Data "<<endl;
		cout<<"3. Exit "<<endl;
		cout<<"Enter Choice:- ";
		cin>>ch;
	
		switch(ch)
		{
			case 1: readdata();
				break;
			case 2: showdata();
				break;
			case 3: exit(0);
				break;
			default: cout<<"Wrong choice";
		}
		cout<<"Do you want to continue(y/n):- ";
		cin>>choice;
		if(choice=='n')
		{
			exit(0);
		}
	}
return 0;
}

//function for reading data
void readdata()
{	
	cout<<"Enter Roll no. :- ";
	cin>>s[i].roll;
	cout<<"Enter Name :- ";
	cin>>s[i].name; 
	i++;
}

//function for view data
void showdata()
{
	int j;

	cout<<"Roll no"<<"\t"<<"Name"<<endl;
	for(j=1;j<i;j++)
	{
		cout<<s[j].roll<<"\t"<<s[j].name<<endl;
	}
}
