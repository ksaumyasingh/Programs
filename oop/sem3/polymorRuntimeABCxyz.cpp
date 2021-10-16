//WOOP over ABC (Base) , XYZ (derived) class for implementing Rumtime Polymorphism.
//kumari saumya singh
//roll no.=1913097
//date of creation=7-04-2021
 
#include<iostream>
#include<string.h>

using namespace std;
class ABC
{
	public:
		
		void display()
		{
			cout<<"Runtime Polymorphism Base class";
		}
};

class XYZ : public ABC
{
		public:
		
		void display()
		{
			cout<<"Runtime Polymorphism Derived class";
		}
	
};

int main()
{
	XYZ p;
	XYZ *ptr;
	
	ptr= &p;
	
	ptr->display();
	
	
	
	return 0;
}