//4. Generate and compute series x/1! - x/2! + x/3! - x/4! .............upto n th term
//Kumari Saumya Singh
//1913097
//date of creation: 12-01-2021

#include<iostream>
using namespace std;
int main()
{
	double x,n;
	cout<<"\nenter the value of x and value of n";
	cin>>x>>n;
	double sum=0,factorial=1;
	for(int i=1;i<=n;i++)
	{
		factorial=factorial*i;
		if(i%2==0)
			sum=sum-(x/factorial);
		else
			sum=sum+(x/factorial);
	}
	cout<<"\noutput of series=";
	cout<<sum;
}