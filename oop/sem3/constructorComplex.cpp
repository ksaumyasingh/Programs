//kumari saumya singh
//1913097
//D.O.C- 27-02-2021

#include<iostream>
using namespace std;
class Complex
{
	public:
	int x,y;
	Complex()
	{
		x=0;
		y=0;
	}
	Complex(int p,int q)
	{
		x=p;
		y=q;
	}
	void print()
	{
		cout<<"\ncomplex no. :"<<x<<"+i"<<y;
	}
};
int main()
{
	Complex c1,c2(2,3);
	c1.print();
	c2.print();
	return 0;
}