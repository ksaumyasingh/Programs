//2. WOOP over Student class for storing record and printing result of
//student using IOS function and Manipulators.

//kumari saumya singh
//1913097
//D.O.C- 14-04-2021


#include<iostream>
#include<iomanip>

using namespace std;

class student
{
	int roll;
	char name[20],course[20];
	float m1,m2,m3,m4;

 	public:

 			void read()
 			{
 		 		cout<<"\nEnter Roll no. of student= ";
 		 		cin>>roll;
 		 		cout<<"\nEnter the Name of student= ";
 		 		cin.ignore();
				cin.getline(name,20);
				cout<<"\nEnter Course of Student= ";
 		 		cin.getline(course,20);
 		 		cout<<"\nEnter Marks of four subjects=  ";
       			cin>>m1>>m2>>m3>>m4;
			}

 		 	void print()
 		 	{

 		 	  	cout<<"\n\nName : ";
				cout.width(10);
 		 		cout.fill(' ');
				cout<<name;

                cout<<"\n Roll No. : ";
 		 	  	cout.width(15);
 		 		cout.fill(' ');
 		 	  	cout<<roll;

 		 	  	cout<<"\nCourse : "<<setw(10)<<setfill(' ')<<course;
 		 	  	cout<<"\nMarks : ";
 		 	  	cout<<setprecision(2)<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4;
			}

};
int main()
{
	student s;

	s.read();
	s.print();

	return 0;
}