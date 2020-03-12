/*
	Program to find factorial of a number
*/
#include<iostream>
using namespace std;
int main()
{
	int num,digitTotal=0,i,rem;
	int temp;
	cout<<"Enter number to find its digit sum:-";
	cin>>num;
	temp=num;

	while(num>0)
	{
		rem = num%10;
		digitTotal = digitTotal + rem;
		num= num/10;
	}

	cout<<"Sum of Digit of "<<temp<<" is "<<digitTotal<<endl;

	return 0;
}
