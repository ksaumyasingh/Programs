//kumari saumya singh
//1913097
//D.O.C- 5-02-2021


#include<iostream>
//#include<stdio.h>
using namespace std;
class Customer
{
	private:int age;
	char name[20];
	public:
	void read()
	{
		cout<<"\n enter name and age of Customer\n";
		fflush<stdin>;
		gets(name);
		cin>>age;
	}
	void print()
	{
			cout<<"\nname:"<<name<<"\n age"<<age;
	}
	
};
int main()
{
	Customer c1,c2;
	cout<<"\nenter record \n";
	cout<<"\nCustomer 1\n";
	c1.read();
	cout<<"\nCustomer 2\n";
	c2.read();
	cout<<"\n Customer record ";
	cout<<"\nCustomer 1\n";
	c1.print();
	cout<<"\nCustomer 2\n";
	c2.print();
	
}