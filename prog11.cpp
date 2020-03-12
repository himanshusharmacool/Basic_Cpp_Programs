/*
	Program to define a class circle and add functions to perform following tasks. Read, display and calculate area.
*/
#include<iostream>
using namespace std;

class circle
{
	private:
 		float area;
		int r;
	public:
		void read()
		{
			cout<<"Enter radius of circle:- ";
			cin>>r;
		}
		
		void getarea()
		{
			area = 3.14*r*r;
			cout<<"Area of Circle = "<<area<<endl;
		}
};
int main()
{	
	circle c;

	c.read();
	c.getarea();

	return 0;
}
