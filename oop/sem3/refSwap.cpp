#include<iostream>

#include<stdlib.h>
using namespace std;
class Swap
{
	public:
	void swap(int &a,int &b)
	{
		int temp;
		temp=a;
		a=b;
		b=temp;
	}
};
int main()
{
	int a,b;
	Swap s;
	cout<<"enter a: ";cin>>a;
	cout<<"enter b: ";cin>>b;
	s.swap(a,b);
	cout<<"value of a="<<a<<" and value of b="<<b<<" after swapping";
}