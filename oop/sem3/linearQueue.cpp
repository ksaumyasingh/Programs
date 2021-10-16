//kumari saumya singh
//1913097
//D.O.C- 4-02-2021


#include<iostream>
using namespace std;
#define max 3//const int max=3;
class Qqueue
{
	int f,r;
	int c[max];
	public:
	void init()
	{
		f=0;
		r=-1;
	}
	void enqueue(int a)
	{
		if(r==max-1)
		{
			cout<<"overflow"<<endl;
			return;
		}
		r=r+1;		
		c[r]=a;
	}
	int dequeue()
	{
		if(r==-1)
		{
			cout<<"underflow"<<endl;
			return 0;
		}
		(f)++;
		return c[f-1];
	}
	void display()
	{
		for(int i=f;i<=r;i++)
			cout<<c[i]<<" ";
		cout<<endl;
	}
	void size()
	{
		cout<<" size of queue = "<<r+1<<endl;
	}
};
int main()
{
	Qqueue s;
	s.init();
	cout<<(s.dequeue())<<endl;
	s.enqueue(4);
	s.enqueue(5);
	s.display();
	s.enqueue(5);
	s.display();
	cout<<(s.dequeue())<<endl;
	s.display();
}