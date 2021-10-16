//kumari saumya singh
//1913097
//D.O.C- 1-02-2021

#include<iostream>
#include<math.h>
using namespace std;
class Number
{
	private:int x,r;
	public:
	void read()
	{
		cout<<"enter no.and power of that no.";
		cin>>x>>r;
	}
	void power()
	{
		cout<<"power:"<<pow(x,r);
	}
	
};
int main()
{
	Number n;
	n.read();
	n.power();
}