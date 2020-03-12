/*
	Program to demonstrate constructor function overloading.
*/
#include<iostream>
using namespace std;

class test
{
	private:
		int a,b;
	public:
		//no argument
		test()
		{
			cout<<"Hii I am Default Constructor.."<<endl;
		}
		
		//overloading by changing no of argument
		test(int a,char b)
		{	
			cout<<"Hii I am overloaded Constructor due to change in  argument no..."<<endl;
		}
		
		//overloading by changing sequence of argument
		test(char a,int b)
		{
			cout<<"Hii I am also overloaded constructor due to change in sequence of arguments"<<endl;
		}
};

int main()
{	
	
	test t1,t2(5,'h'),t3('s',2);
	
	return 0;
}
