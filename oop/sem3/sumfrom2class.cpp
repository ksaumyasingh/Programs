//kumari saumya singh
//1913097
//D.O.C- 21-02-2021


#include<iostream>
using namespace std;
class XYZ;
class ABC;
class ABC
{
	int x;
	public:
	void get()
	{
		cout<<"\nenter no. x ";
		cin>>x;
	}
	void show(){cout<<"\n x is "<<x;}
	friend int sum(ABC ,XYZ );
};
class XYZ
{
	int y;
	public:
	void get()
	{
		cout<<"enter no. y ";
		cin>>y;
	}
	void show(){cout<<"\n y is "<<y;}
	friend int sum(ABC ,XYZ );
};
int sum(ABC w,XYZ t)
{
	int sum;
	sum=w.x+t.y;
	return sum;
}
int main()
{
	ABC p;
	XYZ q;
	p.get();
	q.get();
	p.show();
	q.show();
	cout<<"\nsum of two numbers: "<< sum(p,q);
}