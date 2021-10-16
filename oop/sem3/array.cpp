//kumari saumya singh
//1913097
//D.O.C- 22-01-2021

#include<iostream>
using namespace std;
class Array
{
	private:int a[20],l;
	public:
	void read()
	{
		cout<<"enter size of array";cin>>l;
		cout<<"enter the elements of array";
		for(int i=0;i<=l-1;i++)
			cin>>a[i];
	}
	void print()
	{
		cout<<"\narray"<<endl;
		for(int i=0;i<=l-1;i++)
			cout<<a[i]<<" ";
	}
	void sort();
	int search(int ele)
	{
		for(int i=0;i<=l-1;i++)
			if(a[i]==ele)
				return 1;
		return 0;
	}
	
};
void Array::sort()
{
	int m,p;
	for(int i=0;i<=l-1;i++)
	{
		m=a[i];
		for(int j=i+1;j<=l-1;j++)
			if(a[j]<m)
			{
				m=a[j];
				p=j;
			}
		if(m!=a[i])
		{
			int temp;
			temp=a[i];
			a[i]=a[p];
			a[p]=temp;
		}	
	}
}
int main()
{
	Array a;
	a.read();
	a.sort();
	cout<<"\nenter the ele to be searched";
	int ele;
	cin>>ele;
	if(a.search(ele))
		cout<<"\n ele present";
	else
		cout<<"\n ele not present";		
	a.print();
}