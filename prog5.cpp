/*
	Program to print Fibonacci series
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,a,b,c;
	
	cout<<"Enter number of terms for Fibonacci series:- ";
	cin>>n;

	cout<<"Fibonacci series :- ";
	//initializing series 
	a=0;
	b=1;	
	cout<<a<<" "<<b<<" ";
	
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		cout<<c<<" ";

		//interchanging value 
		a=b;
		b=c;
	}
	cout<<endl;
	return 0;
}
