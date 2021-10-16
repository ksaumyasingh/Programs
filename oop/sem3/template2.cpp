#include<iostream>
using namespace std;

template<class t1,class t2>
t2 SUM(t1 a, t2 b)
{
	return a+b;
}
void display(t1 x,t2 y)
{
	cout<<endl<<x;
	cout<<endl<<y;
}
int main()
{
	int a,b;
	float f,g;
	cout<<SUM(4,5);
	cout<<SUM(45.33,76.888);
	cin>>a;
	cin>>f;
}