#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;
class stud
{
	public:
		int mob;
		char name[10];
		void getdata()
		{
			cout<<"\n Enter name : \t";
			cin>>name;
			cout<<"\n Enter phone number : \t";
			cin>>mob;
			cout<<endl;
		}
		void display()
		{
			cout.setf(ios::left);
			cout<<endl<<setw(15)<<name<<setw(15)<<mob;
		} 
		void search(char name[])
		{
			
		}
};
int main()
{
	int i,j;
	stud s[3];
	ofstream fout;
	fout.open("stud.txt");
	for(i=0;i<3;i++)
	{
		s[i].getdata();
		fout.write((char *)&s[i],sizeof(s[i]));
	}
	fout.close();
	ifstream fin;
	if(!fin)
	{
		cout<<"file not found";
		return 1;
	}
	stud temp;
	for(i=0;i<3;i++)
		for(j=0;j<3-i-1;j++)
		{
			int r=strcmp(s[j].name,s[j+1].name);
			if(r>0)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	cout<<"NAME           PHONE NUMBER";
	for(i=0;i<3;i++)
		s[i].display();
		
	fin.close();
	return 0;
}
