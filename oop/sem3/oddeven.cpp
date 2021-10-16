//kumari saumya singh
//1913097
//D.O.C- 1-02-2021

#include<iostream>
using namespace std;
class Number
{
	private:int n;
	public:
		void read()
		{
			cout<<"\nenter number:";
			cin>>n;
		}
		void factorial()
		{
			int f=1,i;
			for(i=1;i<=n;i++)
			{
				f=f*i;
			}
			cout<<"\nfactorial is "<<f;
		}
		void positiveNegative()
		{
			if(n>0)
				cout<<"\n positive";
			else if(n<0)
					cout<<"\n negative";
					else 
						cout<<"number is zero";	
		}
		void isOdd()
		{
			if(n%2==0)
				cout<<"\n even";
			else
				cout<<"\n odd";
		}
};
int main()
{
	Number n;
	n.read();
	n.factorial();
	n.positiveNegative();
	n.isOdd();
	
}