/*
	Program to create class COMPLEX and overload Binary + operator to add objects. Use friend functions.	
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
		cout<<"x="<<x<<" , y="<<y<<endl;
	}

	friend complex operator +(complex & ,complex & );
};

complex operator +(complex &c1,complex &c2)
{
	complex t;
	t.x=c1.x+c2.x;
	t.y=c1.y+c2.y;
	return t;
}

int main()
{	
	complex c1(4.0,6.0),c2(6.0,7.0),c3;

        //first object
        cout<<"First Object:- ";
        c1.show();

        //second object
        cout<<"Second Object:- ";
        c2.show();

        //third object
        c3=c1+c2;       //adding objects
        cout<<"Third Object:- ";
        c3.show();


	return 0;
}
