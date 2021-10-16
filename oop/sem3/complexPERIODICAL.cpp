#include<iostream>
using namespace std;

class complex
{
	private:
			float img,real;
	public :
		friend complex set( );
		friend complex Multi(complex Y,complex Z);
		friend void show(complex );
		void Add(complex Y, complex Z)
		{
		    real= Y.real+Z.real;
            img= Z.img + Y.img;
		}
};
		complex set()
		{
			complex temp;
			float a,b;
			cout<<"Enter real and imaginary part of Complex number= \n";
			cin>>a>>b;
			temp.real=a;
			temp.img=b;
			return temp;
		}
		void show(complex y)
		{
			cout<<"Complex Number:("<<y.real<<")+("<<y.img<<")i"<<endl;
		}
complex Multi(complex Y, complex Z)
{
	complex temp;
	temp.real= Y.real*Z.real - Y.img*Z.img;
	temp.img= Y.real*Z.img + Y.img*Z.real;
	return temp;
}

int main()
{
	complex C1,C2,C3,C4;
	C1=set();
	C2=set();
	show(C1);
	show(C2);
	C3.Add(C1,C2);
	cout<<"After Addition : ";
	show(C3);

	C4=Multi(C1,C2);
	cout<<"After Multiplication : ";
	show(C4);
	return 0;
}