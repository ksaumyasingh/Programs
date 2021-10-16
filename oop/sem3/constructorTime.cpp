//kumari saumya singh
//1913097
//D.O.C- 26-02-2021

#include<iostream>
using namespace std;
class Time
{
	int DD,MM,YY;
	public:
	Time()
	{
		DD=00;
		MM=00;
		YY=00;
	}
	Time(int dd,int mm,int yy)
	{
		DD=dd; MM=mm; YY=yy;
	}
	void print()
	{
		cout<<"\ndate :"<<DD<<":"<<MM<<":"<<YY;
	}
};
int main()
{
	Time t1,t2(12,04,21),t3;
	t1.print();
	t2.print();
}