/*
	Program to reads a text file.
*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{	
	ifstream fin; //input var

	fin.open("code.txt");	//opening file
	char ch;
	
	//reading file data and printing 
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}

	fin.close();	//closing file
	return 0;
}
