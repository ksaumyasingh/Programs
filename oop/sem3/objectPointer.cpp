// WOOP using object pointer over student class for holding and printing data of n students.

//kumari saumya singh
//roll no.=1913097
//date of creation=8-04-2021
 
#include<iostream>
#include<string.h>


using namespace std;


class Student
{
	char name[20];
	int rollno;
	public:
	
	void getdata(char const *a, int roll)
	{
		strcpy(name, a);
		rollno = roll;
	}
	
	void display()
	{
		cout<<"Name        : "<<name<<endl;
		cout<<"Roll Number : "<<rollno<<endl;
	}
};


int main()
{
	Student *s = new Student[10];
	Student *s1 = s;
	int n;

	char a[20]; int roll;
	
	cout<<"Enter number of students= ";
	cin>>n;

	for(int i=0; i<n; i++)
	{
		cout<<"\nEnter the Name of Student "<<i+1<<" : ";
		cin.ignore()
;		cin.getline(a,20);
		cout<<"Enter Roll Number of Student "<<i+1<<" : ";
		cin>>roll;
		s->getdata(a, roll);
		s++;
	}

	for(int i=0; i<n; i++)
	{
		cout<<"\nStudent "<<i+1<<" : "<<endl;
		s1->display();
		s1++;
	}

	return 0;
}