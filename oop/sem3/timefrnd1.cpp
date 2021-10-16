//kumari saumya singh
//1913097	
//D.O.C=22-02-2020

#include<iostream>
using namespace std;

class Time
{
	int HH;
	int MM;
	int SS;

	public:
			void get()
			{
				cout<<"\nEnter time(HH,MM,SS)= ";
				cin>>HH>>MM>>SS;
			}

			void show()
			{
				cout<<"\nTime HH: "<<HH<<" MM: "<<MM<<" SS: "<<SS;
			}

			Time Add(Time n)
			{
				Time temp;
				temp.SS=(SS+n.SS)%60;
				temp.MM=(MM+n.MM)%60+(SS+n.SS)/60;
				temp.HH=(HH+n.HH)%60+(MM+n.MM)/60;

				return temp;
			}

			friend Time Diff(Time X,Time Y);

};

Time Diff(Time X,Time Y)
{
	Time temp;  //In this program First Time is always greater or equal to second time
	if(X.SS<Y.SS)
	{
		X.MM--;
		X.SS=X.SS+60;
	}
	temp.SS=X.SS-Y.SS;
	if(X.MM<Y.MM)
	{
		X.HH--;
		X.MM=X.MM+60;
	}
	temp.MM=X.MM-Y.MM;
	temp.HH=X.HH-Y.HH;
	return temp;
}

int main()
{
	Time t,p,a,b;
	cout<<"\n In this program First Time is always greater or equal to second time \n";
	t.get();
	t.show();

	p.get();
	p.show();
	cout<<endl;

	cout<<"\nAfter Addition :\n";
	a=t.Add(p);
	a.show();

	cout<<"\n\nAfter Difference: \n";
	b=Diff(t,p);
	b.show();

	return 0;

}