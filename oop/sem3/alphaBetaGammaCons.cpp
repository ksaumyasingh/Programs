//kumari saumya singh
//roll no.=1913097
//date of creation=17-03-2021

#include<iostream>
using namespace std;
class alpha
{
	int x;
	public:
		alpha(int i)
		{
			x=i;
			cout<<"alpha initialized \n";
		}
		void show_x(void)
		{
			cout<<"x = "<< x <<"\n";
		}
};
class beta
{
	float y;
	public:
	beta(float j)
	{
		y=j;
		cout<< "beta initialised \n";
	}
	void show_y(void)
	{
		cout<<" y = "<<y<<"\n";
	}
};
class gamma:public beta,public alpha
{
	int m,n;
	public:
	gamma(int a,float b,int c,int d):
	alpha(a),beta(b)
	{
		m=c;
		n=d;
		cout<<"gamma initialised \n";
	}
	void show_mn(void)
	{
		cout<<"m= "<<m<<endl<<" n= "<<n<<endl;
	}
	
};
int main()
{
	gamma g(4,2.54F,20,30);
	cout<<endl;
	g.show_x();
	g.show_y();
	g.show_mn();
	return 0;
}