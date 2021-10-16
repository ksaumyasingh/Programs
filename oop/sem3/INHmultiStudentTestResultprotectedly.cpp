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
class Result:protected Test //or protected
{
	private:
		float total;
	public:
		void getDetails(char N[],int R,float x,float y)
		{
			get(N,R);
			getMarks(x,y);
		}
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
	int rollno,sub1,sub2;
	char studentName[20];
	cout<<"enter name,rollno,sub1,sub2 marks"<<endl;
	fflush(stdin);
	gets(studentName);
	cin>>rollno>>sub1>>sub2;
	student1.getDetails(studentName,rollno,sub1,sub2);
	student1.display();	
}