//7. WOOP over Vector clas for overloading *, >>, << operator on the class.

//kumari saumya singh
//1913097
//D.O.C- 1-04-2021

#include<iostream>
#include<stdlib.h>
# define size 5
using namespace std;

class vector
{
	int v[size];

	public:
		vector()
		{
			for(int i=0;i<size;i++)
				v[i]=0;
		}

		friend void operator>>(istream &x,vector &y)
		{
			cout<<"Enter elements of Vector= ";
			for(int i=0;i<size;i++)
			{
				x>>y.v[i];

			}
		}

		friend void operator<<(ostream &x,vector y)
		{
			cout<<"Elemets of Vector = ";
			for(int i=0;i<size;i++)
			{
				x<<y.v[i]<<" ";

			}
			cout<<endl;
		}

		vector operator *(int x)
		{
			vector temp;

			for(int i=0;i<size;i++)
				temp.v[i]=v[i]*x;

			return temp;
		}

		friend vector operator *(int y,vector x)
		{
			vector temp;

			for(int i=0;i<size;i++)
				temp.v[i]=x.v[i]*y;

			return temp;
		}




};

int main()
{

	vector v1,v2,v3;

	cin>>v1;
	cout<<v1;

	v2=v1*5;
	cout<<v2;

	v3=10*v2;
	cout<<v3;

	return 0;
}