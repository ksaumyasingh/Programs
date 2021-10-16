//WOOP for implementing Vector Class for different Data Types.

//kumari saumya singh
//1913097
//D.O.C- 22-04-2021

#include<iostream>

using namespace std;

template<class T,int size>

class vector
{
	T v[20];
	
	public:
		
		vector()
		{
			for(int i=0;i<size;i++)
				v[i]=0;
		}
		
		vector(T a[])
		{
			for(int i=0;i<size;i++)
				v[i]=a[i];
		}
		
		T operator *(vector &y)
		{
			T sum=0;
			for(int i=0;i<size;i++)
				sum=sum+this->v[i]*y.v[i];
			return sum;
		}
		
		void show()
		{
			for(int i=0;i<size;i++)
				cout<<v[i]<<" ";
		}
		
};


int main()
{
	int a[5];
	
	cout<<"\nEnter v1 elements : ";
	for(int i=0;i<5;i++)
		cin>>a[i];
		
	vector <int,5> v1(a);
	cout<<"\n v1 : ";
	v1.show();
	
	int b[5];
	cout<<"\n\nEnter v2 elements : ";
	for(int i=0;i<5;i++)
		cin>>b[i];
		
	vector <int,5> v2(b);
	cout<<"\n v2 : ";
	v2.show();
	
	int sum=v1.operator *(v2);
	
	cout<<"\n\nSum of product of v1 and v2 : "<<sum;
	
	char c[5];
	
	cout<<"\n\nEnter v4 : ";
	for(int i=0;i<5;i++)
		cin>>c[i];
		
	vector <char,5> v4(c);
	cout<<"\n v4 : ";
	v4.show();
	
	
	return 0;
}