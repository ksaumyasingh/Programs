//WOP for SWAPPING two variables of any D.T. with each other.
//kumari saumya singh
//1913097
//D.O.C- 22-04-2021

#include<iostream>
using namespace std;

template <class T>

void Swap(T &x,T &y)
{
	T temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	int a,b;
	float c,d;
	
	cout<<"Enter two integer numbers: ";
	cin>>a>>b;
	cout<<"Enter two float numbers: ";
	cin>>c>>d;
	
	cout<<"Before Swap:";
	
	cout<<"\n a value is: "<<a;
	cout<<"\n b value is: "<<b;
	cout<<"\n c value is: "<<c;
	cout<<"\n d value is: "<<d;
	
	Swap(a,b);
	Swap(c,d);
	
	cout<<"\n\nAfter Function Templates:\n";
	
	cout<<"\na value is: "<<a;
	cout<<"\nb value is: "<<b;
	cout<<"\nc value is: "<<c;
	cout<<"\nd value is: "<<d;
	
	return 0;
}