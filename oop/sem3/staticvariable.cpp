//kumari saumya singh
//roll no.=1913097
//date of creation=22-feb-2021


#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Student
{
	int roll;
	char name[20];
	public:
	static int Ocount;
	static char coname[20];
	static int count(){ return Ocount; }
	static void college()
	{ 
		strcpy(coname,"bansthali university");
		cout<<coname;
	}
	void read()
	{
		fflush;
		cout<<"\nenter name";
		gets(name);
		cout<<"\nenter roll";
		cin>>roll;
		cin.ignore();
		Ocount++;
	}
	void print()
	{
		cout<<"\n name : "<<setw(22)<<setf(left)<<name<<"  roll: "<<setw(10)<<setf(left)<<roll<<" college name: ";
		college();
	}
};
int Student::Ocount;
char Student::coname[20];
int main()
{
	cout<<Student::Ocount;
	Student s1,s2;
	s1.read();
	s2.read();
	s1.print();
	s2.print();
	cout<<Student::Ocount;
	return 0;
}