/*
	Program to show overloading of ( )operator.
*/
#include<iostream>
using namespace std;

class Test
{
	int x,y;
	public:
	Test()
	{
		x=y=0;
	}
	Test(int a, int b)
	{
		x=a;
		y=b;
	}
	void show()
	{
		cout<<"x: "<<x<<endl;
		cout<<"y: "<<y<<endl;
	}

	Test operator ()();
};


Test Test::operator ()()
{
	int tmp;
	tmp = y;
	y=x;
	x=tmp;
	
	return *this;
}



int main()
{	
	Test ob1(10,20);
	
//	cout<<"Value before interchange"<<endl;
	ob1.show();
	
	ob1();  //overloading () to interchange  value
	cout<<"Value after interchange using () operator"<<endl;	
	ob1.show();

	return 0;
}

