//kumari saumya singh
//1913097
//D.O.C- 3-02-2021


#include<iostream>
using namespace std;
#define max 3//const int max=3;
class Sstack
{
	int top;
	int c[max];
	public:
	void init()
	{
		top=-1;
	}
	void push(int a)
	{
		if(top==max-1)
		{
			cout<<"overflow"<<endl;
			return;
		}
		top=top+1;		
		c[top]=a;
	}
	int pop()
	{
		if(top==-1)
		{
			cout<<"underflow"<<endl;
			return 0;
		}
		(top)--;
		return c[top+1];
	}
	void display()
	{
		for(int i=0;i<=top;i++)
			cout<<c[i]<<" ";
		cout<<endl;
	}
	void size()
	{
		cout<<" size of stack = "<<top+1<<endl;
	}
};
int main()
{
	Sstack s;
	s.init();
	cout<<(s.pop())<<endl;
	s.push(4);
	s.push(5);
	s.display();
	s.push(5);
	s.display();
	cout<<(s.pop())<<endl;
	s.display();
}