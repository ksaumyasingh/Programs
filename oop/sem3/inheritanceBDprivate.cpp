//kumari saumya singh
//roll no.=1913097
//date of creation=4-03-2021

#include<iostream>
using namespace std;
class B
{
	private:int a;
	public:
	int b;
	int get_a()
	{
		return a;
	}
	void get()
	{
		cout<<endl<<"enter two numbers a and b";
		cin>>a>>b;
	}
	void show()
	{
		cout<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl;
	}
};
class D:private B//all public members of  base class get inherited in derived class in private section.
//so we can get b and c directly since it get inherited as private DM in D class. 
{
	int c;
	public:
	void get_c()
	{
		get();
		cout<<endl<<"c: ";
		cin>>c;
	}
	void mul(void)
	{
		cout<<get_a()*b*c<<endl;
	}
	void display(void)
	{
		cout<<endl<<"a :"<<get_a()<<"  b: "<<b<<" c: "<<c;
	}
};
int main()
{
	D d;
	d.get_c();
	d.mul();
	d.display();
}
