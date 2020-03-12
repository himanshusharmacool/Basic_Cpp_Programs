/*
	Program to fund factorial of a number
*/
#include<iostream>
using namespace std;

//main function 
int main()
{

	long int fact=1;
	int num,i;
	
	cout<<"Enter number to find factorial:- ";
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	
	cout<<"Factorial of "<<num<<" is :- "<<fact<<endl;

return 0;
}
