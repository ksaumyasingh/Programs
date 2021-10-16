//2. Overload Unary (++ (F) , - (M)) and Binary (* (F), != (M)) over Integer Class.

//kumari saumya singh
//1913097
//D.O.C- 27-03-2021

#include<iostream>
#include<stdlib.h>


using namespace std;

class Integer
{
	int x;

	public:
		void getdata(int a)
		{
			x=a;
		}

		void show()
		{
			cout<<"Number= "<<x<<"\n";
		}

		friend void operator ++(Integer &z);
		void operator --();
		friend Integer operator *(Integer z,Integer y);
		int operator !=(Integer z);

};

void operator ++(Integer &z)
{
	z.x++;
}

void Integer ::operator --()
{
	--x;


}

Integer operator *(Integer z,Integer y)
{
	Integer temp;

	temp.x=z.x*y.x;

	return temp;
}

int Integer :: operator !=(Integer z)
{
	if(x!=z.x)
		return 1;
	else
		return 0;

}

int main()
{
	Integer I1,I2,I3;

	I1.getdata(5);
	I2.getdata(10);

	++I1;
	I1.show();

	--I2;
	I2.show();

	I3=I1*I2;
	I3.show();

	if(I1!=I2)
		cout<<"Both are not equal";
	else
		cout<<"Both are equal";

	return 0;
}