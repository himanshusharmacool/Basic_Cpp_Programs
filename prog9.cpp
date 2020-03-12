/*
	Program to concatenate two strings using your defined Function.
*/
#include<iostream>
using namespace std;

// Function declaration
void  concat(char[],char[]);

//main function
int main()
{
	char first[100],second[100],combine[200];
	
	cout<<"Enter First String :- ";
	cin.getline(first,100);
	cout<<"Enter Second String :- ";
	cin.getline(second,100);
	concat(first,second);	//calling concat function
	return 0;
}

//Function Defination
void  concat(char str1[],char str2[])
{	int i=0,j=0;
	char combine[200]; 

	while(str1[i]!='\0')
	{	
		combine[i]=str1[i];	
		i++;
	}	
	combine[i]=' ';	 //adding space between two string ;
	i++;

	while(str2[j]!='\0')
	{	
		combine[i]=str2[j];
		i++;
		j++;
	}

	cout<<"Concatenated String is :- "<<combine<<endl;
}
