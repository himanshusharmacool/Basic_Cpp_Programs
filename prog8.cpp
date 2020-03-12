/*
	Program to find the length of a string.
*/
#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int length=0;

	cout<<"Enter  String :- ";
	cin.getline(str,100);  //using getline function to take string with spaces

	//calculating length
	while(str[length]!='\0')
	{
		length++;
	}
	cout<<"Length of string is :- "<<length<<endl;
return 0;
}
