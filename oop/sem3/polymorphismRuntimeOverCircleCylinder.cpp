//WOOP over Circle (Base) , Cylinder (derived) class and implement Rumtime Polymorphism over Area() function.

//kumari saumya singh
//roll no.=1913097
//date of creation=12-04-2021

#include<iostream>
#include<string.h>

using namespace std;

class circle
{
	protected: float radius;
	
	public:
		circle(float r)
		{
			radius=r;
		}
		
		virtual float area()
		{
			return 3.14*radius*radius;
		}
		
};

class cylinder: public circle
{
	private: float height;
	
	public:
		cylinder(float r,float h ):circle(r)
		{
			height=h;
		}
		
		float area()
		{
			return (2*3.14*radius*radius+2*3.14*radius*height);
		}
};



int main()
{
	circle *ptr;
	float r,h;
	
	cout<<"Enter radius of circle= ";
	cin>>r;
	circle c(r);
	ptr=&c;
	cout<<"Area of Circle= "<<ptr->area();
	
	
	cout<<"\n\nEnter height of cylinder= ";
	cin>>h;
	cylinder cy(r,h);
	ptr=&cy;
	cout<<"Area of Cylinder= "<<ptr->area();
	
	
	
	
	
	return 0;
}
