//kumari saumya singh
//roll no.=1913097
//date of creation=21-jan-2021

#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;
class Account
{
	private:long amount;
	char name[20],address[40];
	char contact_No[10];
	int acno;
	public:
	void read()
	{
		cout<<"\nenter acno ";
		srand(time(0));
		acno=rand();
		fflush(stdin);
		cout<<endl<<acno<<endl;
		cout<<"\nenter name ";gets(name);
		cout<<"\nenter address ";gets(address);
		cout<<"\nenter contact_No";cin>>contact_No;
		cout<<"\nenter amount";cin>>amount;
	}
	void print()
	{
		cout<<"\nacno"<<setw(5)<<"name"<<setw(20)<<"address"<<setw(40)<<"contact_No"<<setw(10)<<"amount"<<endl;
		cout<<acno<<setw(5)<<name<<setw(20)<<address<<setw(40)<<contact_No<<setw(10)<<amount<<endl;
	}
	void deposit()
	{
		long a;
		cout<<"\nenter amount to be deposited";
		cin>>a;
		amount=amount+a;
		cout<<"\nupdated amount:"<<amount;
	}
	void withdraw()
	{
		long a;
		cout<<"\nenter amount to be withdraw";
		cin>>a;
		amount=amount - a;
		cout<<"\nupdated amount after withdrawal:"<<amount;	
	}
	void interest()
	{
		int interest,t;
		cout<<"enter the no. of month";
		cin>>t;
		interest=amount*t*3.75/100;
		cout<<"\ninterest at rate 3.75%:"<<interest;
	}
	void update()
	{
		int f=0;
		int choice;
		do
		{
			cout<<"\n update 1.name 2.address 3.contact_No : 4.exit"<<endl;
			cin>>choice;
			switch(choice)
			{
				case 1:	cout<<"\n name:";
						fflush(stdin);
						gets(name);
						break;
				case 2:	cout<<"\n address:";
						fflush(stdin);
						gets(address);
						break;
				case 3:	cout<<"\n contact_No:";
						fflush(stdin);
						gets(contact_No);
						break;
				case 4: f=1;
						break;
			}
		}while(f==0);
	}
};
int main()
{
	Account p1;
	int choice;
	do
	{
		cout<<"\n1.reading account information \n2.print account \n3.deposite amount in account \n4.withdraw amount from account \n5.interest \n6.update account \n7.exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:	p1.read();
					break;
			case 2:	p1.print();
					break;
			case 3: p1.deposit();
					break;
			case 4:	p1.withdraw();
					break;
			case 5:	p1.interest();
					break;
			case 6: p1.update();
					break;
			case 7: exit(0);
		}
	}
	while(1);
}