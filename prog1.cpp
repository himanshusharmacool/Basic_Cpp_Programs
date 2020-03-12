/*
	Program to check number is prime or not
*/
#include<iostream>
using namespace std;
int main()
{
	int num,i;
	bool prime = true;
	
	cout<<"Enter Number to check it is Prime or not :- ";
	cin>>num;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			prime = false;
		}
	}	

	if(prime == true)
	{
		cout<<num<<" is a Prime Number "<<endl;
	}
	else
	{
		cout<<num<<" is not a Prime Number "<<endl;
	}
	return 0;
}
