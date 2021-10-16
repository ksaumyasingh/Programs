#include<iostream>
#include<stdlib.h>
using namespace std;
class Swap
{
	public:
	void swapByValue(int a,int b,int c)
	{
		int temp;
		temp=a;
		a=b;
		b=c;
		c=temp;
		cout<<"a,b,c="<<a<<","<<b<<","<<c<<endl;
	}
	void swapByRef(int &a,int &b,int &c)
	{
		int temp;
		temp=a;
		a=b;
		b=c;
		c=temp;
	}
	void swapByAdress(int *a,int *b,int *c)
	{
		int temp;
		temp=*a;
		*a=*b;
		*b=*c;
		*c=temp;
	}
	
};
int main()
{
	int a, b ,c;
	Swap s;
	cout<<"enter a ,b, c three numbers"<<endl;
	cin>>a>>b>>c;
	do
	{
		int choice;
		cout<<"swap by 1.value 2.reference 3.adress4.exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
					s.swapByValue(a,b,c);
					break;
			case 2:
					s.swapByRef(a,b,c);
					cout<<"a,b,c="<<a<<","<<b<<","<<c<<endl;
					break;
			case 3:
					s.swapByAdress(&a,&b,&c);
					cout<<"a,b,c="<<a<<","<<b<<","<<c<<endl;
					break;
			case 4:
					exit(0);
		}
	}
	while(1);
}