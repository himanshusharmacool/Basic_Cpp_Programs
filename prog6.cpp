/*
	Program for matrix addition, subtraction and multiplication.
*/
#include<iostream>
using namespace std;

//declaring global variables
	int m1[10][10],m2[10][10],result[10][10];
	int p,q,r,s,i,j,k,ch;
	char choice;

//declaring function
void input();
void add();
void sub();
void mul();
void show();

//main function
int main()
{
	//getting matrix	
	input();		

	//operations menu		
	while(1)
	{	system("clear");
		cout<<"****MENU****\n";
		cout<<"1.Addition"<<endl;
		cout<<"2.Subtraction"<<endl;
		cout<<"3.Multiply"<<endl;
		cout<<"4.View Matrix"<<endl;
		cout<<"5.Re-enter Matrix"<<endl;
		cout<<"6.Exit"<<endl;
		cout<<"\nEnter your Choice:-  ";
		cin>>ch;
		
		switch(ch)
		 {
			case 1: show(); add();
				break;
			case 2: show(); sub();
				break;
			case 3: show();mul();
				break;
			case 4: show();
				break;
			case 5: input();
				break;
			case 6: exit(0);
			default: cout<<"Invaid choice"<<endl;
			 
		
		 }
		
		cout<<"Do you want to Continue(y/n):- ";
		cin>>choice;
		if(choice=='n' || choice =='N')
		{
			exit(0);
			
		}
		else
		{	
			//do nothing [continue while loop in main function]
		}

		
	}
	

	return 0;
}
//defining input function
void input()
{
	cout<<"Enter size of First matrix:- ";
	cin>>p>>q;
	cout<<"Enter size of Second matrix:- ";
	cin>>r>>s;
	
	cout<<"Enter Elements of First Matrix:- "<<endl;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		cin>>m1[i][j];
	}

	cout<<"Enter Elements of Second Matrix:- "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		cin>>m2[i][j];
	}	

}

//defining show function
void show()
{
	cout<<"1st Matrix:"<<endl;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			cout<<"\t"<<m1[i][j];
		}
		cout<<"\n";
	}
	cout<<"2nd Matrix:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
			cout<<"\t"<<m2[i][j];
		}
		cout<<"\n";
	}
}

//defining add function
void  add()
{	int t;
	if(p==r && q==s)
	{
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				result[i][j]=m1[i][j]+m2[i][j];
			}
		}
		cout<<"\nAddition of Two Matrix:\n";
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				cout<<"\t"<<result[i][j];
			}
		   cout<<"\n";
		}
		
	}
	else
	{
		cout<<"Addition is not possible"<<endl;
	}	


}

//defining multiply function
void mul()
{
	
	if(p==r)
	 {
		for(i=0;i<p;i++)
	 	{
			for(j=0;j<s;j++)
		 	{
				result[i][j]=0;
				for(k=0;k<q;k++)
			  	{
					result[i][j]=result[i][j]+(m1[i][k]*m2[k][j]);
				}
			 }
	 	}
		cout<<"\nMultiplication of Matrix:\n";
		for(i=0;i<p;i++)
	 	{
			for(j=0;j<s;j++)
			{
				cout<<"\t"<<result[i][j];
			}
			cout<<"\n";
		 }
	 }
	else
	cout<<"multiplication not possible";

}

//defining substract function
void sub()
{
	if(p==r&&q==s)
	{
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				result[i][j]=m1[i][j]-m2[i][j];
			}
		}
		cout<<"\nSubtraction of Matrix are:\n";
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				cout<<"\t"<<result[i][j];
			}
			cout<<"\n";
		}
	}
	else
	cout<<" Subtraction not possible";
}


