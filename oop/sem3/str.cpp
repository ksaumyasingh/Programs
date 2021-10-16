#include<iostream>
#include<stdio.h>
using namespace std;
class String
{
	private:string str;
	public:
	void read()
	{
		cout<<"\nenter String"<<endl;
		fflush(stdin);
		cin>>str;
	}
	void print()
	{
		cout<<str<<endl;
	}
	friend void add(String s,String s1);
	friend int compare(String s,String s1);	
};
void add(String s,String s1)
{
	cout<<s.str+s1.str;
}
int compare(String s,String s1)
{
	if(s.str==s1.str)
		return 1;
	return 0;
}
int main()
{
	String s,s1;
	s.read();
	s1.read();
	s.print();
	s1.print();
	add(s,s1);
	if(compare(s,s1))
		cout<<"\nboth String are equal";
	else
		cout<<"\nboth String are not equal";
}