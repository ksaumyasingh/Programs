//kumari saumya singh
//1913097
//D.O.C- 17-02-2021

#include<iostream>
using namespace std;
//function inside class are inline by default
class Area
{
	public:
	double area(double l=1,double b=1)
	{
		return l*b;
	}
	int area(int r=0)
	{
		return 3.14*r*r;
	}
	float area(float a=0)
	{
		return a*a;
	}
	double area(double b,int h);
};
inline double Area::area(double b=1,int h=1)
{
	int r;
	r=(b*h)/2;
	return r;
}
int main()
{
	Area a;
	cout<<"\nenter length and base of rectangle";
	double l,b;
	cin>>l>>b;
	cout<<"\narea of rectangle: "<<a.area(l,b);
	cout<<"\nenter side of square";
	float x;
	cin>>x;
	cout<<"\narea of square: "<<a.area(x);
	cout<<"\nenter hight and base of triangle";
	int h;double base;
	cin>>h;cin>>base;
	cout<<"\narea of triangle: "<<a.area(base,h);
	cout<<"\nenter radius of circle";
	int r;
	cin>>r;
	cout<<"\narea of circle: "<<a.area(r);
}