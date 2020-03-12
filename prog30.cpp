/*
	Program to writes paragraph to a text file.
*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{	
	ofstream fout;	//file var
	
	char string[300];
	
	fout.open("code.txt");
	cout<<"********* Enter Paragraph ********"<<endl;
	cin.getline(string,300);
	
	fout<<string;	//writing data to file
	
	cout<<"\n File writtern successfully"<<endl;
	fout.close();	//closing file

	return 0;
}
