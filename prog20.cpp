/*
	Program  to overload binary +operator to add two objects of user defined Time class with data members HH MM SS.
*/
#include<iostream>
using namespace std;

class Time
{
	private:
 		int hh,mm,ss;
	public:
		void getTime()
		{
			cout<<"Enter Hours:- ";
			cin>>hh;
			cout<<"Enter Minutes:- ";
			cin>>mm;
			cout<<"Enter Second:- ";
			cin>>ss;
		}
		
		void showTime()
		{
		  //adjust seconds
			while(ss>=60)
			{
				ss=ss-60;
				mm++;
			}
		//adjust minutes
			while(mm>59)
			{
				mm=mm-60;
				hh++;
			}
			
			cout<<"Time(HH,MM,SS) :-  "<<hh<<":"<<mm<<":"<<ss<<endl;
		}
		

		Time operator +(Time t)
		{
			Time tmp;
			tmp.hh = hh;
			tmp.mm= mm;
			tmp.ss = ss;
			
			tmp.hh += t.hh;
			tmp.mm += t.mm;
			tmp.ss += t.ss;

			return tmp; 
		}
};

int main()
{	
	Time t1,t2,t3;
	
	cout<<"\n********** First Object **********"<<endl;
	t1.getTime();
	
	cout<<"\n********** Second Object **********"<<endl;
	t2.getTime();

	t3 = t1 + t2;

	cout<<"\n********** Combined Time **********"<<endl;
	t3.showTime();
	
	return 0;
}
