/*
	Program to overload binary < operator to compare two objects of user defined English Distance Class.
*/
#include<iostream>
using namespace std;

class Distance
{
	private:
		int feet,inches;
	public:
	Distance()
	{
		feet=0;
		inches=0;
	}

	void getdist()
	{
		cout<< "\nEnter feet: ";
		cin>> feet;
		cout<< "Enter inches: ";
		cin>> inches;
	}
	void showdist() const
	{
		cout<< feet << "-" << inches <<endl;
	}

	friend int  operator <(Distance & ,Distance & );
};


int operator <(Distance &d1,Distance &d2)
{
	int l1,l2;
	
	l1=d1.feet*12+d1.inches;
	l2=d2.feet*12+d2.inches;
	
	if(l1<l2)
		return 1;
	else
		return 0;
}

int main()
{	
	Distance d1,d2;
	
	cout<<"Enter details for first object:-"<<endl;
	d1.getdist();
	
	cout<<"Enter details for second object:-"<<endl;
	d2.getdist();
	
	if(d1<d2)
	cout<<"\n\nSecond object  is larger"<<endl;
	else
	cout<<"\n\nFirst object is larger"<<endl;

	return 0;
}
