/*
	Program for  Static data member and member function
*/
#include<iostream>

using namespace std;

class stdata
{
	private: 
		int i;
		static int j;
	public:
	stdata()
	 {
		i=0;
		 j=0;
	 }
	void set(int a,int b)
	 {
	 	i=a;
	  	j=b;
	 }
	static void show(stdata &m)
	 {
		cout<<"i= "<<m.i<<endl;
		cout<<"static j="<<j<<endl;
	 }
 };
int stdata::j;

int main()
{	
	stdata s1,s2;

	cout<<"initialising class data member using object s1"<<endl;
	s1.set(10,20);
	cout<<"passing object s1 as parameter to static void show()"<<endl;
	s1.show(s1);
	cout<<"initialising class data member using object s1"<<endl;
	s1.set(30,60);
	cout<<"passing object s1 as parameter to static void show()"<<endl;
	s1.show(s1);
	cout<<"passing object s2 as parameter to static void show()"<<endl;
	s1.show(s2);

	return 0;
}
