/*
	Program to overloaded function area ( ) for calculating the area of triangle and circle.
*/
#include<iostream>
using namespace std;

class shape
{	
	public:
		void area(int r)
		{
			cout<<"Area of circle is :- "<<3.14*r*r<<endl;
		}
		
		void area(int b,int h)
		{
			cout<<"Area of Triangle is :- "<<(b*h)/2<<endl;
		}
};

int main()
{	
	shape circle,triangle;
	
	circle.area(5);
	triangle.area(2,3);

	return 0;
}
