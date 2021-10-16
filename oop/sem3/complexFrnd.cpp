//kumari saumya singh
//1913097
//D.O.C- 22-02-2021


#include<iostream>
using namespace std;
class complex;
class complex
{
	int p;
	int q;
	public:
	void store()
	{
		cout<<"\nenter real and img part of complex no. ";
		cin>>p>>q;
	}
	void show()
	{
		cout<<"\ncomplex no: ("<<p<<")+i("<<q<<")";
	}
	friend void sum(complex ,complex );
	friend void subtract(complex ,complex );
	friend void multiply(complex ,complex );
};
void sum(complex w,complex t)
{
	int l,m;
	l=w.p+t.p;
	m=w.q+t.q;
	cout<<"\nsum of two complex no. :("<<l<<")+i("<<m<<")";
}
void subtract(complex w,complex t)
{
	int l,m;
	l=w.p-t.p;
	m=w.q-t.q;
	cout<<"\nsubtraction of two complex no. :("<<l<<")+i("<<m<<")";
}
void multiply(complex w,complex t)
{
	int l,m;
	l=(w.p*t.p)-(w.q*t.q);
	m=w.q*t.p+w.p*t.q;
	cout<<"\nsum of two complex no. :("<<l<<")+i("<<m<<")";
}
int main()
{
	complex c1,c2;
	c1.store();
	c2.store();
	c1.show();
	c2.show();
	sum(c1,c2);
	subtract(c1,c2);
	multiply(c1,c2);
}