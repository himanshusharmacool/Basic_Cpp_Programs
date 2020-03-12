/*
	Program to find reverse of a number
*/
#include<iostream>
using namespace std;
//main function 
int main()
{
	int num,rem,rev=0;
	int temp;	
	cout<<"Enter number to find its reverse :- ";
	cin>>num;
	temp = num;

	//reverse operation
	while(num>0)
	{
		rem = num%10;
		rev = rev*10 + rem;
		num = num/10;
		
	}
	
	//output	
	cout<<" Reverse of "<<temp<<" is :- "<<rev<<endl;
	
	return 0;

}
