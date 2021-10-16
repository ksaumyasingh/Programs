//8. WOOP over Array class for overloading >>, << , [] operator on the class.

//kumari saumya singh
//1913097
//D.O.C- 1-04-2021

#include<iostream>
#include<stdlib.h>
# define size 5

using namespace std;

class Array
{
	int a[size];

	public:

		Array()
		{
			for(int i=0;i<size;i++)
				a[i]=0;
		}

		friend void operator>>(istream &x,Array &y)
		{
			cout<<"Enter elements of array= ";
			for(int i=0;i<size;i++)
			{
				x>>y.a[i];

			}
		}

		int & operator[](int i)
		{
			if(i>size)
			{
				cout<<"Index out of bound";
				return a[0];

			}
			else
				return a[i];


		}

		friend void operator<<(ostream &x,Array y)
		{
			cout<<"Elements of array= ";
			for(int i=0;i<size;i++)
			{
				x<<y.a[i]<<" ";

			}
		}


};

int main()
{
	Array a;

	cin>>a;

	cout<<a;
	cout<<endl;

	cout<<endl<<"Value of A[1]: "<<a[1];
	cout<<endl<<"Value of A[3]: "<<a[3];

	return 0;
}