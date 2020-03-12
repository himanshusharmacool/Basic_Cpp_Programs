/*
	Program to demonstrate the working of virtual function.
*/
#include<iostream>
using namespace std;
class base
{
	public:
		virtual void func()
		{
			cout<<"This is base func()\n";
		}
};
class derived:public base
{
	public:
	void func()
	{
		cout<<"This is derived func()\n";
	}
};

int main()
{	
	base b,*bp;
	derived d1;
	bp=&b;		//pointing base class obj to base class pointer
	bp->func();	//calling function
	bp=&d1;		//pointing derived class obj to base class pointer
	bp->func();	//calling function
	return 0;
}
