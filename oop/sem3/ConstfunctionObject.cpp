//kumari saumya singh
//roll no.=1913097
//date of creation=27-02-2021


#include<iostream>
#include<string.h>

using namespace std;

const int HouseNo=654;

class person
{
	char name[20];
	char add[20];

public:
			person(const char n[],const char a[])
			{
				strcpy(name,n);
				strcpy(add,a);
			}

			void getdata()
			{
				cout<<"Enter Name and Address(Hno, Street, City)= ";
				cin>>name;
				cin>>add;
			}

			void show() const
			{
				cout<<"Name : "<<name;
				cout<<"\nAddress(Hno, Street, City) : "<<HouseNo<<" "<<add;
			}

};

int main()
{
	const person p("Saumya","Mohan nagar,Chhapra");
	p.show();

	return 0;

}
