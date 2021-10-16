//WOOP over Media (Base ) Book (Derived) Tape (Derived) for implementing Rumtime Polymorphism over pure virtual function Display() function.
//kumari saumya singh
//roll no.=1913097
//date of creation=8-04-2021

#include<iostream>
#include<string.h>

using namespace std;

class media
{
	protected :
		char name[20];
		int id;
		
	public:
		media(char z[],int y)
		{
			strcpy(name,z);
			id=y;
		}
		
		virtual void display()=0;
		
};

class book :public media
{
	protected: int pages;
	
	public:
		
	book(char z[],int y,int p):media(z,y)
	{
		pages=p;
	}
	
	void display()
	{
		cout<<endl<<"Name of Book: "<<name;
		cout<<endl<<"ID of Book: "<<id;
		cout<<endl<<"Pages in Book: "<<pages;
	}
};


class tape :public media
{
	protected: int time;
	
	public:
		
	tape(char z[],int y,int x):media(z,y)
	{
		time=x;
	}
	
	void display()
	{
		cout<<endl<<"\nName of Tape: "<<name;
		cout<<endl<<"ID of Tape: "<<id;
		cout<<endl<<"Time of Tape: "<<time;
	}
};

int main()
{
	media *m[2];
	
	m[0]=new book("C++",300,600);
	m[0]->display();
	
	m[1]=new tape("Algorithms",200,2);
	m[1]->display();
	
	
	
	return 0;
}
