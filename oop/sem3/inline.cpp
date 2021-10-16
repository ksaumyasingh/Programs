//kumari saumya singh
//1913097
//D.O.C- 15-02-2021

#include<iostream>
#include<math.h>
using namespace std;

 inline void power(int m,int n)
{
	cout<<"power of "<<m<< "rasied to "<<n<<" = "<<pow(m,n)<<endl;
}
 inline void avg(int m,int n)
{
	cout<<"avg of "<<m<<" and "<<n<<" = "<<(m+n)/2<<endl;
}
 inline void cube(int n=3)
{
	cout<<"cube of "<<n<<" = "<<n*n*n<<endl;
}

int main()
{
	power(4,2);
	avg(4,5);
	cube(1);
}
