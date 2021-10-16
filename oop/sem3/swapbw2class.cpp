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
	void get(){x=10;}
	void show(){cout<<"\n x is "<<x;}
	friend void swap(ABC &,XYZ &S);
};
class XYZ
{
	int y;
	public:
	void get(){y=20;}
	void show(){cout<<"\n y is "<<y;}
	friend void swap(ABC &,XYZ &);
};
void swap(ABC &w,XYZ &t)
{
	int temp=w.x;
	w.x=t.y;
	t.y=temp;
}
int main()
{
	ABC p;
	XYZ q;
	p.get();
	q.get();
	p.show();
	q.show();
	swap(p,q);
	p.show();
	q.show();
}
/*class student
{
	public:
	static int ocount;
	void read()
	{
		cin>>ocount;
	}
	void print()
	{
		cout<<ocount;
	}
};
int student::ocount=10;
int main()
{ 
student s1,s2;
cout<<student::ocount;
s1.read();
s2.print();
}*/