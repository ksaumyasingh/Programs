//kumari saumya singh
//1913097
//D.O.C- 1-03-2021

#include<iostream>
using namespace std;
class Time;
class Time
{
	private:int HH,MM,SS;
	public:
	void get()
	{
		cout<<"\nenter time in formate HH MM SS";
		cin>>HH>>MM>>SS;
	}
	void show()
	{
		cout<<"\n time2: "<<HH<<":"<<MM<<":"<<SS;
	}
	friend void addition(Time w,Time t);
	friend void differece(Time w,Time t);
};
void addition(Time w,Time t)
{
	int hh,mm,ss;
	hh=w.HH+t.HH;
	mm=w.MM+t.MM;
	ss=w.SS+t.SS;
	if(ss>=60)
	{
		ss=ss-60;
		mm++;
		if(mm>=60)	
		{
			mm=mm-60;
			hh++;
		}
	}
	cout<<"\naddition of two time is : "<<hh<<":"<<mm<<":"<<ss;
}
void differece(Time w,Time t)
{
	int hh,mm,ss;
	
	mm=w.MM-t.MM;
	if(w.SS>=t.SS)
	{
		ss=w.SS-t.SS;
		if(w.MM>=t.MM)
		{
			mm=w.MM-t.MM;
			hh=w.HH-t.HH;
		}
		else
		{
			mm=w.MM+(60-t.MM);
			hh=w.HH-t.HH;
			hh--;
		}
	}
	else
	{
		ss=w.SS+(60-t.SS);
		if(w.MM>=t.MM)
		{
			mm=w.MM-t.MM;
			hh=w.HH-t.HH;
		}
		else
		{
			mm=w.MM+(60-t.MM);
			hh=w.HH-t.HH;
			hh--;
		}
		mm--;	
	}
	cout<<"\ndifference b/w two time is : "<<hh<<":"<<mm<<":"<<ss;
}
int main()
{
	Time t1,t2;
	t1.get();
	t2.get();
	t1.show();
	t2.show();
	addition(t1,t2);
	differece(t1,t2);
}
