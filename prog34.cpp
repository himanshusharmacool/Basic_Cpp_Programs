/*
	Program for Friend function as a bridge between two classes rupee and dollar
*/
#include<iostream>

using namespace std;


class dollar;
class rupee
{
	private:
		int r;
	public:
		rupee(){
			r=0;
		}
		rupee(int i){
			r=i;
		}
		void setrs(int i)
		{
			cout<<"RUPEES : Rs"<<i<<endl;
			r=i;
		}
		void displayrs(){
			cout<<"RUPEES : Rs"<<r<<endl;
		}

	friend void convertdtr(rupee &r,dollar &d);
	friend void convertrtd(dollar &d,rupee &r);

};

class dollar
{
	private:
		int d;
	public:
		dollar(){
			d=0;
		}
		dollar(int i){
			d=i;
		}
		void setdl(int i)
		{
			cout<<"DOLLAR : $"<<i<<endl;
			d=i;
		}
		void displaydl(){
			cout<<"DOLLAR : $"<<d<<endl;
		}

		friend void convertdtr(rupee &r,dollar &d);
		friend void convertrtd(dollar &d,rupee &r);
};

void convertdtr(rupee &rs,dollar &dl)
{
	rs.r=dl.d*55;
}
void convertrtd(dollar &ds,rupee &rs)
{
	ds.d=rs.r/55.0;
}
int main()
{	

	rupee r1;
	dollar d1;

	cout<<"CONVERTING RUPEES TO DOLLAR"<<endl;
	r1.setrs(200);
	convertrtd(d1,r1);
	d1.displaydl();
	cout<<"CONVERTING DOLLAR TO RUPEES"<<endl;
	d1.setdl(10);
	convertdtr(r1,d1);
	r1.displayrs();
	return 0;
}
