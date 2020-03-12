/*
	Program to create class DISTANCE and overload Binary + operator to add objects. Use member functions.
*/
#include<iostream>
using namespace std;

class Distance
{
	private:
		int feet;
		float inches;
	public:
	Distance()
	{
		feet=0;
		inches=0.0;
	}
	Distance(int ft, float in)
	{
		feet=ft;
		inches=in;
	}
	void getdist()
	{
		cout<< "\nEnter feet: ";
		cin>> feet;
		cout<< "Enter inches: ";
		cin>> inches;
	}
	void showdist()
	{
		cout<<feet<<"feet "<<inches<<"inches"<<endl<<endl;
	}

      Distance operator +(Distance);
};

//function defination outside class
Distance Distance::operator +(Distance d2)
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if(i>= 12.0)
     	{
		i -= 12.0;
		f++;
	}
	return Distance(f,i);
}

//main function
int main()
{	
	Distance dist1(2,3.0),dist2(4,2.0),dist3; //creating objects

	dist3 = dist1 + dist2;	//adding two objects 
	
	//first object
	cout<<"dist1 = ";  
	dist1.showdist(); 
	
	
	//second object
	cout<<"dist2 = ";  
	dist2.showdist(); 


	//third object
	cout<<"dist3 = ";  
	dist3.showdist(); 

	return 0;
}
