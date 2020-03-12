/*
	Program to implement a generic class Stack, add necessary constructors and other functions.
*/
#include<iostream>
using namespace std;


class overflow{ };
class underflow{ };

template<class T> class stack
{
	private:

		int top;
		T s[3];

	public:
		stack()
		{
			top=-1;
		}
		void push(T );
		T pop();
};

template<class T> void stack<T> :: push(T item)
{
	if(top==2)
		throw overflow();
	else
	{
		top++;
		s[top]=item;
		cout<<"\n Item "<<item<<" is pushed";
	}
}

template<class T> T stack<T> :: pop()
{
	T item;
	if(top==-1)
		throw underflow();
	else
	{
		item=s[top];
		top--;
		return item;
	}
}

int main()
{	
	stack<int> s1;
	int num;
	char ch;
	float f;
	
	try
	{
		s1.push(20);
		s1.push(50);
		s1.push(70);
		s1.push(30);

		f=s1.pop();
		cout<<"\nvalue is popped :"<<f;
		num=s1.pop();
		cout<<"\n value is popped :"<<num;
		ch=s1.pop();
		cout<<"\n value is popped :"<<ch;
		ch=s1.pop();


	}
	catch(overflow o)
	{
		cout<<"\n\n Overflow stack"<<endl;
	}
	catch(underflow u)
	{
		cout<<"\n\n Underflow stack"<<endl;
	}
	return 0;
}
