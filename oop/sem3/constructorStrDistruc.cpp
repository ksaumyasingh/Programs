//kumari saumya singh
//1913097
//D.O.C- 3-03-2021


#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class str
{
	char *p;
	int l;
	public:
	str()
	{
		p=new char[1];
		p[0]=0;
	}
	str(char *z)
	{
		l=strlen(z);
		p=new char[l+1];
		strcpy(p,z);
	}
	str(str &z)
	{
		l=strlen(z);
		p=new char[l+1];
		strcpy(p,z);
	}		
	void show()
	{
		cout<<endl<<"string is "<<p;
	}
	~str()
	{
		cout<<"\ndistroying object";
		delete p;
	}
};
int main()
{
	str s="saumya";
	str s1("shivani");
	str s2;
	s.show();
	str s2(s);
	s1.show();
	s2.show();
}