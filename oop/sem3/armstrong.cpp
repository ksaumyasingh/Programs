//2. C++ program to check whether a number if Armstrong or not. 
//(Hint - with idea if number is of 2 digit sum of Square of digit ==number
//if number is of 3 digit sum of cube of digit == number  and so).
//Kumari Saumya Singh
//1913097
//date of creation: 11-01-2021


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,l,o;
	cin>>n;
	o=n;
	for(int i=1;o!=0;i++)
	{
		o=o/10;
		l=i;
	}
	int sum=0,i,d,m;
	m=n;
	for(i=0;i<l;i++)
	{
		d=n%10;
		sum=pow(d,l)+sum;
		n=n/10;
	}
	if(m==sum)
		cout<<"\nit is armstrong";
	else
		cout<<"\nnot armstrong";
	
}