//WOOP for implementing the concept of Function Overriding on simple class.

//kumari saumya singh
//roll no.=1913097
//date of creation=17-03-2021


#include<iostream>
using namespace std;

class ABC
{
        int x;
public:
		void get()
		{
			cout<<"From Base Class:\n ";
			cout<<"Enter a number= ";
			cin >>x;
		}

		void Show()
		{
			cout<<"\nX from Base Class = " <<x;
		}
};

class XYZ :public ABC
{
	int y;
	public:
		void get()
		{
			cout<<"From Derived Class:\n ";
			cout<<"Enter a number= ";
			cin >>y;
		}

		void Display()
		{
			cout<<"\nY from Derived Class = " <<y;
		}
};

int main()
{
	XYZ z;
	z.ABC::get();
	z.get();
	z.Show();
	z.Display();

}