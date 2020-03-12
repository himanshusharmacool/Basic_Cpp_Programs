/*
	Program to create Student class and add constructors, other functions and destructor.
*/
#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private:
		int roll;
		char name[20];
	public:
		//default constructor
		student()
	      	{
			roll=20;
			strcpy(name,"ARVIND");
	      	}
	
		//parameterized constructor
		student(int e, char s[])
	        {
			roll=e;
			strcpy(name,s);
	      	}
		
		//function
		void readval()
	        {
			cout<<"Enter roll :- ";
			cin>>roll;
			cout<<"Enter name:- ";;
			cin>>name;
	      	}
		void show()
	      	{
			cout<<"\nroll no= "<<roll<<endl;
			cout<<"Name= "<<name<<endl;
	      	}

		//Destructor
	      	~student()
	      	{
			cout<<"destructor called"<<endl;
		}
};
int main()
{	char name[] = "himashu";
	student s1,s2(2,name);
	s1.show();
	s2.show();
	s1.readval();
	s1.show();	
	return 0;
}
