#include<iostream>
using namespace std;
class String
{
	private:char str[10],n;
	public:
	void read()
	{
		cout<<"\n enter size of string";
		cin>>n;
		cout<<"\n enter string element";
		for(int i=0;i<=n-1;i++)
			cin>>str[i];
	}
	void print()
	{
		cout<<"\n string";
		for(int i=0;i<=n-1;i++)
			cout<<str[i];
		
	}
	void search()
	{
		int k=0;
		for(int i=0;i<=n-1;i++)
		{
			for(int j=0;j<=n-1;i++)
				if(str[j]==str[i])
					k++;
			cout<<"\n char "<<str[i]<<" is present "<<k<<" times";
		}
	}	
};
int main()
{
	String s;
	s.read();
	s.print();
	s.search();
}