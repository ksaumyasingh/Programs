#include<iostream>
#include<string>
using namespace std;

int key(int input1,int input2,int input3)
{
	int m,a,l1,l2,l3,s1,s2,s3,n1,n2,n3;
	n1=input1;
	m=n1%10;
	while(n1/10>0)
	{
		n1=n1/10;
		a=n1%10;
		if(m<a)
			m=a;
	}
	l1=m;
	n2=input2;
	m=n2%10;
	while(n2/10>0)
	{
		n2=n2/10;
		a=n2%10;
		if(m<a)
			m=a;
	}
	l2=m;

	n3=input3;
	m=n3%10;
	while(n3/10>0)
	{
		n3=n3/10;
		a=n3%10;
		if(m<a)
			m=a;
	}
	l3=m;

	n1=input1;
	m=n1%10;
	while(n1/10>0)
	{
		n1=n1/10;
		a=n1%10;
		if(m>a)
		{
			m=a;
		}
	}
	s1=m;

	n2=input2;
	m=n2%10;
	while(n2/10>0)
	{
		n2=n2/10;
		a=n2%10;
		if(m>a)
		{
			m=a;
		}
	}
	s2=m;

	n3=input3;
	m=n3%10;
	while(n3/10>0)
	{
		n3=n3/10;
		a=n3%10;
		if(m>a)
			m=a;
	}
	s3=m;

	int key=l1+l2+l3-s1-s2-s3;
	return key;
	
}
int main()
{
	cout<<key(2610,2359,1784);
	return 0;
}