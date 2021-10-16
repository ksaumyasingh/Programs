//9. WOOP over Integer class for overloading pre --, post -- and logical && over the class.

//kumari saumya singh
//1913097
//D.O.C- 1-04-2021

#include<iostream>
#include<stdlib.h>

using namespace std;

class Integer
{
	int x;

	public:
		Integer()
		{
			x=0;
		}
		void getdata(int a)
		{
			x=a;
		}

		void show()
		{
			cout<<"Number= "<<x<<endl;
		}

		void operator--()
		{
			--x;

		}

		Integer operator--(int)
		{
			Integer temp;

			temp.x=x--;

			return temp;

		}

		int operator &&(Integer z)
		{
			if(x && z.x)
				return 1;
			else
				return 0;

		}

};

int main()
{
	Integer A,B,C;
	int n;

	cout<<"Enter an integer= ";
	cin>>n;
	A.getdata(n);
	A.show();

	cout<<"\nAfter pre Increment: ";
	--A;
	A.show();

	cout<<"\nAfter post Increment: ";
	B=A--;
	B.show();

	if(A && B)
		cout<<"\n&& same";
	else
		cout<<"\n&& not same";

	return 0;
}