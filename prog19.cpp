/*
	Program to overload binary + operator to concatenate two objects of user defined class String.
*/
#include<iostream>
#include<string.h>

using namespace std;

class test
{
	private :
		char str[100];
	public:
		void getstr()
		{
			cout<<"Enter string:- ";
			cin>>str;
		}
	
		void showstr()
		{
			cout<<"String:- "<<str<<endl;
		}	
		test  operator +(test s)
		{
			test tmp;
			strcpy(tmp.str,str);
			strcat(tmp.str,s.str);
			
			return tmp;
		}
};
int main()
{	
	test t1,t2,t3;
	
	t1.getstr();
	t2.getstr();
	
	t3 = t1+t2;
	t3.showstr();

	return 0;
}
