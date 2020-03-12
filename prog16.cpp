/*
	Program to create class COMPLEX and overload Binary + operator to add objects. Use member functions.
*/
#include<iostream>
using namespace std;

class complex
{
	private:
		float x,y;
	public:
		complex()
		{
			x=y=0.0;
		}
	
		complex(float f1,float f2)
		{
			x=f1;
			y=f2;
		}
		void show()
		{
			cout<<"x= "<<x<<" , y="<<y<<endl<<endl;
		}

		complex operator +(complex c)
		{
			complex t;
			t.x=x+c.x;
			t.y=y+c.y;
			return t;
		}
};
    

int main()
{	
	complex c1(4.0,6.0),c2(6.0,7.0),c3;
	
	//first object
	cout<<"First Object:- ";
	c1.show();
	
	//second object
	cout<<"Second Object:- ";
	c2.show();

	//third	object
	c3=c1+c2;	//adding objects
	cout<<"Third Object:- ";
	c3.show();
	
	return 0;
}
