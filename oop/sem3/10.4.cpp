//4. Overload (<<) and (>>) operator over Student Class.

//kumari saumya singh
//1913097
//D.O.C- 31-03-2021


#include<iostream>
#include<stdlib.h>

using namespace std;

class Student
{
	char name[20];
	int rollno;
	public:

		friend void operator>>(istream &x,Student &y)
		{
			cout<<"Enter Name and Rollno of student= ";
			x>>y.name;
			x>>y.rollno;
		}

		friend void operator<<(ostream &x,Student y)
		{
			x<<"\nName and Rollno of student= "<<y.name<<" "<<y.rollno;
		}

};

int main()
{
	Student S1;

	cin>>S1;
	cout<<S1;

	return 0;
}