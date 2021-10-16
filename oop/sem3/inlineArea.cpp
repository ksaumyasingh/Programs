//kumari saumya singh
//1913097
//D.O.C- 4-02-2021

#include<iostream>
using namespace std;
//memebr function inside class are inline by default
class Area
{
	public:
	double rectangle(double l,double b)
	{
		return l*b;
	}
	double circle(double r)
	{
		return 3.14*r*r;
	}
	double square(double a);
	double triangle(double b,double h);
};
inline double Area::triangle(double b,double h)
{
	int r;
	r=(b*h)/2;
	return r;
}
inline double Area::square(double a)
{
	return a*a;
}
int main()
{
	Area a;
	cout<<"\nenter length and base of rectangle";
	double l,b;
	cin>>l>>b;
	cout<<"\narea of rectangle: "<<a.rectangle(l,b);
	cout<<"\nenter side of square";
	double x;
	cin>>x;
	cout<<"\narea of square: "<<a.square(x);
	cout<<"\nenter hight and base of triangle";
	double h,base;
	cin>>h>>base;
	cout<<"\narea of triangle: "<<a.triangle(base,h);
	cout<<"\nenter radius of circle";
	double r;
	cin>>r;
	cout<<"\narea of circle: "<<a.circle(r);
}