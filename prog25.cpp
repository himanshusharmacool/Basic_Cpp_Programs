/*
	Program to demonstrate the concept of Inheritance use person and student class for the same.
*/
#include<iostream>
using namespace std;

class person	//person class
{
	private:
		char name[30];
		int id;
	public: 
		void getData()
		{
			cout<<"Enter name:- ";
			cin>>name;
			cout<<"Enter yout Id:- ";
			cin>>id;
		}
		void showData()
		{
			cout<<"\nName :- "<<name<<endl;
			cout<<"Id :- "<<id<<endl; 
		}
};
class student:public person	//student class
{

};
int main()
{	
	person p;
	student s;
	cout<<"\n********** Person class ************"<<endl;
	p.getData();
	p.showData();	
	
	cout<<"\n\n********** Student class ************"<<endl;
	s.getData();
	s.showData();

	return 0;
}
