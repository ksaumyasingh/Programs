//kumari saumya singh
//1913097
//D.O.C- 7-02-2021


#include<iostream>
using namespace std;
class ref
{
	public:
	void refer(int &x)
	{
		x=x+2;
	}
	void refer(char &x)
	{
		x='A';
	}
	void refer(double &x)
	{
		x=x+4;
	}
};
int main()
{
	ref r;
	char y;
	cin>>y;
	r.refer(y);
	cout<<y<<endl;
	int z;
	cin>>z;
	r.refer(z);
	cout<<z<<endl;
	double p;
	cin>>p;
	r.refer(p);
	cout<<p<<endl;
}