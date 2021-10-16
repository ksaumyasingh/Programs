//kumari saumya singh
//roll no.=1913097
//date of creation=24-03-2021

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	protected:
	int rollno;
	char name[20];
	public:
	void get(char N[],int R)
	{
		strcpy(name,N);
		rollno=R;
	}
	void show()
	{
		cout<<"name: "<<name<<endl<<"rollno: "<<rollno<<endl;
	}
};
class Test:public Student
{
	protected:
	float sub1;
	float sub2;
	public:
		void getMarks(float x,float y)
		{
			sub1=x;
			sub2=y;
		}
		void showMarks()
		{
			cout<<"sub1 Marks: "<<sub1<<endl<<"sub2 marks: "<<sub2<<endl;
		}
};
class Result:public Test
{
	private:
		float total;
	public:
		void display()
		{
			total=sub1+sub2;
			show();
			showMarks();
			cout<<"total: "<<total<<endl;
		}
};
int main()
{
	Result student1;
	char studentName[20]="abc";
	student1.get(studentName,45);
	student1.getMarks(87,98);
	student1.display();	
}