//6. WOOP over Complex class for overloading pre ++ , post ++ and () operator on the class.

//kumari saumya singh
//1913097
//D.O.C- 1-04-2021

#include<iostream>
#include<stdlib.h>
using namespace std;

class Complex
{
	float img, real;

	public :
	void get(float x,float y)
	{
		real=x;
		img=y;
	}

	void show()
	{
		cout<<endl<<"Complex Number: Real: "<<real<<"  imaginary: "<<img<<endl;
	}

	Complex operator++()
	{
		Complex temp;

		temp.real=++real;
		temp.img=++img;

		return temp;

	}

	Complex operator++(int)
	{
		Complex temp;

		temp.real=real++;
		temp.img=img++;

		return temp;

	}

	Complex operator()(float a,float b)
	{
		Complex temp;

		temp.real=a;
		temp.img=b;

		return temp;

	}
};

int main()
{
	Complex C1,C2,C3,C4;;

	C1.get(20,10);
	C1.show();

	cout<<"\nAfter Pre Increment: ";
	C2=++C1;
	C2.show();

	cout<<"\nAfter Post Increment: ";
	C3=C2++;
	C3.show();

	C4=C1(40,22);
	C4.show();

	return 0;
}
