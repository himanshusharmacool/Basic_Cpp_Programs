/*
	Program	to implement a class Stack that throws Overflow and Underflow Exceptions.
*/
#include<iostream>
using namespace std;

class overflow{};
class underflow{};

class stack
{
	private:
		int a[5], top;
	public:
		stack()
	 	{
			top=-1;
		}
		void push(int i)
		{
			if(top==4)
			{
				throw overflow();
			}
			else
			{
				a[++top]=i;
				cout<<"Element Added successfully";
			}
		}

		void pop()
		{
			if(top==-1)
			{
				throw underflow();
			}
			else
			{	cout<<"Element Removed :- "<<a[top]<<endl;
				top--;
				
			}
	   	}
};

int main()
{	int inp,ch;
	
	stack s;
	try
	{
		while(1)
		{
			cout<<"\n\n\n******** MENU *********"<<endl;
			cout<<"1. Add "<<endl;
			cout<<"2. Remove "<<endl;
			cout<<"3. Exit"<<endl;
			cin>>ch;		
			switch(ch)
			{
				case 1:	cout<<"Enter your value:- ";
					cin>>inp;
					s.push(inp);
					break;
				case 2: s.pop();
					break;
				case 3: exit(0);
					break;
				default: cout<<"Wrong Input"<<endl;
				
						
			}
	
		}


	}
	catch(overflow of)
	{
		cout<<"overflow stack"<<endl;
	}
	catch(underflow uf)
	{
		cout<<"underflow stack"<<endl;
	}		
	
	return 0;
}
