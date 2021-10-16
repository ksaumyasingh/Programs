//5. WOOP on String class for overloading ==, >>,<< operator.
//kumari saumya singh
//1913097
//D.O.C- 1-04-2021

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class String
{
	char str[20];

	public:

		friend void operator>>(istream &x,String &y)
		{
			cout<<"Enter String= ";
			x>>y.str;
		}

		friend void operator<<(ostream &x,String y)
		{
			x<<"String = "<<y.str<<endl;
		}

		int operator ==(String x)
		{
			if(strcmp(x.str,str)==0)
				return 1;
			else
				return 0;
		}

};

int main()
{
	String S1,S2;

	cin>>S1;
	cout<<S1;

	cin>>S2;
	cout<<S2;


	if(S1==S2)
		cout<<"\nBoth are same";
	else
		cout<<"\nBoth are not same";

	return 0;
}
