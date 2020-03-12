/*
	Program to implements template function that interchange two data values.
*/
#include<iostream>
using namespace std;

template<class T1,class T2>

void interchange(T1 &a,T2 &b)
{
	T1 temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nInside template function\n";
}

void interchange(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nInside overloaded swap"<<endl;
}

int main()
{	
	int i=10,j=20;
	char x='a',y='b';

	cout<<"original i,j: "<<i<<" "<<j<<endl;
	cout<<"original x,y: "<<x<<" "<<y<<endl;
	interchange(i,j);
	cout<<"swapped i,j: "<<i<<" "<<j<<endl;
	interchange(x,y);
	cout<<"swapped x,y: "<<x<<" "<<y<<endl;

	return 0;
}
