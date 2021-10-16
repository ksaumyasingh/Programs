//kumari saumya singh
//1913097
//D.O.C- 4-02-2021


#include<iostream>
using namespace std;
class Student
{
	private:int roll,age;
	private:string name;
	public:
	void read()
	{
		cout<<"\n enter name ,roll ,and age of student\n";
		cin>>name>>roll>>age;
	}
	void print()
	{
			cout<<"\nname:"<<name<<"\n roll:"<<roll<<"\n age"<<age;
	}
	
};
int main()
{
	Student s1;
	cout<<"\nenter record \n";
	cout<<"\nstudent 1\n";
	s1.read();
	cout<<"\n student record\n ";
	cout<<"\nstudent 1\n";
	s1.print();
}