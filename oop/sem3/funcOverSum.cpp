//kumari saumya singh
//1913097
//D.O.C- 17-02-2021

#include<iostream>
using namespace std;
class Sum
{
	public:
	int sum(int a,int b)
	{
		return a+b;
	}
	float sum(int a,float b)
	{
		return a+b;
	}
	int sum(int a,int b,int c)
	{
		return a+b;
	}
	float sum(double a,int b)
	{
		return a+b;
	}
};
int main()
{
	Sum s;
	cout<<s.sum(2,6)<<endl;
	cout<<s.sum(2,6.5F)<<endl;;
	cout<<s.sum(2.9875D,6)<<endl;
	cout<<s.sum(2,7,6);

	return 0;
}