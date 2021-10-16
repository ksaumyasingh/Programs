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
	void formateString(char *a,int size,int n)
	{
		int f=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==0&&i<=size)
			{
				for(int j=i;j<=size-2;j++)
					a[j]=' ';
				a[size-1]=0;
				f=1;
				break;
			}
			if(i==size-1&&n!=size)
			{
				a[i]=0;
				a[i-1]='.';
				a[i-2]='.';
				a[i-3]='.';
				break;
			}/+
			
			
			
			 
		}
	}
	void write()
	{
		cout<<"acno   "<<"name                 "<<"address              "<<"contact_No  "<<"amount"<<endl;
		formateString(name,20,20);
		formateString(contact_No,10,10);
		formateString(address,20,40);
		cout<<acno<<"  "<<name<<"  "<<address<<"  "<<contact_No<<"  "<<amount<<endl;
	}/*
	void print()
	{
		cout<<"acno\tname\taddress\tcontact_No\tamount"<<endl;
		cout<<acno<<"\t"<<name<<"\t"<<address<<"\t"<<contact_No<<"\t"<<amount<<endl;
	}*/
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
	}/*
	void interest()
	{
		int interest,t;
		cout<<"enter the no. of month"
		interest=amount*t*3.75/100;
		cout<<"\ninterest at rate 3.75%:"<<interest;
	}
	void update()
	{
		cout<<"\n update acno:";
		cin>>acno;
		cout<<"\n update amount:";cin>>amount;
		cout<<"updated acno:"<<acno<<" and amount:"<<amount;
	}*/
};
int main()
{
	Account p1;
	int choice;
	do
	{
		cout<<"\n1.reading account information \n2.print account \n3.deposite amount in account \n4.withdraw amount from account \n5.exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:	p1.read();
					break;
			case 2:	p1.write();
					break;
			case 3: p1.deposit();
					break;
			case 4:	p1.withdraw();
					break;
			case 5: exit(0);
		}
	}
	while(1);

	/*p1.interest();
	p1.update();*/
}