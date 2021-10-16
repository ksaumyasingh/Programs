//kumari saumya singh
//roll no.=1913097
//date of creation=18-03-2021

#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	protected:
		char name[20];
		int ID;
		int age;
	public:
		void getE()
		{
			cout<<"enter the name,id ,age of employee"<<endl;
			fflush(stdin);
			gets(name);
			cin>>ID>>age;
		}
		void showE()
		{
			cout<<"NAME: "<<name<<endl<<"ID : "<<ID<<endl<<"age : "<<age<<endl;
		}
};
class Manager:public Employee
{
	private:
		int basicSalary;
		string qualification;
	public:
		void get()
		{
			cout<<" enter basic salary and qualification of manager "<<endl;
			cin>>basicSalary>>qualification;
		}
		void CalSalary()
		{
			cout<<"enter no. of days he worked :"<<endl;
			int noOfDays;
			cin>>noOfDays;
			cout<<"salary of Manager = "<<basicSalary*noOfDays*1.17<<endl;
		}
		void show()
		{
			cout<<"*****Details of Manager******"<<endl;
			cout<<"NAME : "<<name<<endl<<" ID : "<<ID<<endl<<"age : "<<age<<endl<<" basic salary : "<<basicSalary<<endl;
			cout<<"qualification : "<<qualification<<endl;
		}
};
class Worker:public Employee
{
	private:
		int wages;
		string qualification;
	public:
		void get()
		{
			cout<<" enter basic salary and qualification of manager "<<endl;
			cin>>wages>>qualification;
		}
		void CalSalary()
		{
			cout<<"enter no. of hours he worked :"<<endl;
			int noOfHours;
			cin>>noOfHours;
			cout<<"per day salary of Worker = "<<wages*noOfHours*0.17<<endl;
		}
		void show()
		{
			cout<<"*****Details of Worker******"<<endl;
			cout<<"NAME : "<<name<<endl<<" ID : "<<ID<<endl<<"age : "<<age<<endl<<" wages : "<<wages<<endl;
			cout<<"qualification : "<<qualification<<endl;
		}
};
int main()
{
	Manager M;
	M.getE();
	M.showE();
	M.get();
	M.CalSalary();
	M.show();
	
	Worker 	W;
	W.getE();
	W.showE();
	W.get();
	W.CalSalary();
	W.show();
}
