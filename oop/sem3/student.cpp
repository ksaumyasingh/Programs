//kumari saumya singh
//roll no.=1913097
//date of creation=24-03-2021

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	int rollno;
	char name[20],course[20],age[4];
	public:
	static char department[10];
	Student()
	{
		rollno=0;
		age=name=course=NULL;
	}
	Student()
	{
		
	}
	static void depart()
	{
		department="computer science";
	}
	
	
	
}
int main();
