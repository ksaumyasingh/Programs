//1. Overload Unary (--) and Binary (+,-) over Complex Class.
//kumari saumya singh
//1913097
//D.O.C- 26-03-2021


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

		void operator --()
		{
			--real;
			--img;
		}

		friend Complex operator+(Complex x,Complex y)
		{
			Complex temp;

			temp.real=x.real+y.real;
			temp.img=x.img+y.img;

			return temp;

		}

		Complex operator-(Complex x)
		{
			Complex temp;

			temp.real=real-x.real;
			temp.img=img-x.img;

			return temp;

		}
};

int main()
{
	Complex C1,C2,C3,C4;

	C1.get(23,10);
	C2.get(10,5);


	cout<<"Intially ";
	C1.show();
	cout<<" and ";
	C2.show();

	cout<<"\n";
	--C1;
	cout<<"After Unary operator(--) : ";
	C1.show();

	cout<<"\n";
	C3=C1+C2;
	cout<<"After Addition +: ";
	C3.show();

	cout<<"\n";
	C4=C1-C2;
	cout<<"After Subtraction - : ";
	C4.show();

	return 0;
}