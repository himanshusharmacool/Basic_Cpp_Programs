/*
	Program uses file pointer to display any arbitrary record from an pre existing file.
*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class student
{
	private:
		int rno;
		char name[30];
		float per;
	public:
		student()
		{
			rno=0;
			strcpy(name,"NO_name");
			per=0.0;
		}
		student(int r,char *n,float pr)
		{
			rno=r;
			strcpy(name,n);
			per=pr;

		}

		void show();
		void read();
		void cmpname(char *);

};

void student::show()
{
cout<<"Roll no: "<<rno<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Percentage: "<<per<<endl;
}

void student::read()
{
	cout<<"\nEnter the roll no :";
	cin>>rno;
	cout<<"Enter the name :";
	cin>>name;
	cout<<"Enter percentage:";
	cin>>per;
}

int main()
{	
	student s[3],p;
	int nor,pos,i,n;

	fstream fp;
	fp.open("student.dat",ios::binary|ios::out);
	cout<<"Enter the details of students to be written onto the data file student.dat:";
	for(i=0;i<=2;i++)
	{
		s[i].read();
		fp.write((char*)&s[i],sizeof(student));
	}
	fp.close();
	fp.open("student.dat",ios::binary|ios::in);
	fp.seekg(0,ios::end);
	pos=fp.tellg();
	nor=pos/sizeof(student);
	cout<<"\nNO OF RECORDS IN THE FILE student.dat: "<<nor<<endl<<endl;
	cout<<"Enter record no: ";
	cin>>n;
	pos=(n-1)*sizeof(student);
	fp.seekg(pos,ios::beg);
	fp.read((char*)&p,sizeof(student));
	p.show();
	fp.close();

	return 0;
}
