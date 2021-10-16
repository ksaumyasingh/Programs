//kumari saumya singh
//1913097
//D.O.C- 5-02-2021

#include<iostream>
using namespace std;
class Opration
{
	private:int a,b;
	public:
	void read()
	{
		cout<<"enter 2 number";
		cin>>a>>b;
	}
	void greater()
	{
		if(a>b)
			cout<<a<<" is greater";
		else if(a<b)
				cout<<b<<" is greater";
			else
				cout<<"both equal";
	}
	void gcd()
	{
		int g=1;
		if(a==0||b==0)
			g=0;
		else
		{
			for(int i=1;i<=a&&i<=b;i++)
				if(a%i==0&&b%i==0)
				{
					g=g*i;
				}
		}
		cout<<"\ngcd: "<<g;
	}
};
int main()
{
	Opration n;
	n.read();
	n.greater();
	n.gcd();
}