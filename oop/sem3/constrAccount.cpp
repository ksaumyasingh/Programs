//kumari saumya singh
//roll no.=1913097
//date of creation=4-03-2021

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class student
{
	private:
	int Roll_no,Age;
    char Name[20],Course[20];
	static char Department[50];

public:
        student()
		{
			Roll_no=0;
			Age=0;
			strcpy(Name,"");
			strcpy(Course,"");
		}

	    student(char nm[],int r,char c[],int a)
	    {
	    	Roll_no=r;
	    	Age=a;

	    	strcpy(Name,nm);
			strcpy(Course,c);
		}



		friend int search(student s[],int n,char nm[])
		{
			for(int i=0;i<n;i++)
			{
				if(strcmp(s[i].Name,nm)==0)
					return i;
			}

			return -1;
		}

		friend void sort(student s[],int n)
		{
				student t;
   				for(int i=0;i<n;i++)
   				{
   					for(int j=0;j<n;j++)
    				{
     					if(s[i].Roll_no<s[j].Roll_no)
     					{
      						t = s[i];
      						s[i]=s[j];
      						s[j]=t;
				 		}
					}
   				}

		}

		void show()
	    {

			cout<<endl<<"NAME: "<<Name;
			cout<<endl<<"ROLL No. :"<<Roll_no;
			cout<<endl<<"Course: "<<Course;
			cout<<endl<<"Age: "<<Age;
			cout<<endl<<"Department: "<<Department;
	   	}


};


char student::Department[50]="Computer Science & Information Technology";

int main()
{
	int a,r,ch,i,k,n;
	char nm[20],c[20],name[20];
	student s[300];
	cout<<"Enter total number of Students = ";
	cin>>n;


	do
	{
		cout<<"\n\nPress 1.Read  2.Search   3.Sort   4. Display    5.Exit";
		cout<<"\nEnter choice= ";
		cin>>ch;
		switch(ch)
		{

			case 1 :
					for(i=0;i<n;i++)
					{
						cout<<"\nEnter NAME of student = ";
						fflush(stdin);
						gets(nm);
						cout<<"Enter Roll Number of Student = ";
						cin>>r;
						cout<<"Enter Course of student = ";
						cin>>c;
						cout<<"Enter Age of student = ";
						cin>>a;

						s[i]=student(nm,r,c,a);

					}

					break;


			case 2: cout<<"\nEnter NAME to be searched= ";
					fflush(stdin);
					gets(name);

					k=search(s,n,name);
					if(k==-1)
						cout<<"Student Not Found";

					else
					{
						cout<<"Student Found";
						cout<<"\n\nDetails of student"<<" : ";
						s[k].show();


					}
					break;



			case 3 :
					sort(s,n);
					for(i=0;i<n;i++)
					{
						cout<<endl<<"\nDetails of student "<<i+1<<" : ";
						s[i].show();
					}
					break;

			case 4: for(i=0;i<n;i++)
					{
						cout<<endl<<"\nDetails of student "<<i+1<<" : ";
						s[i].show();
					}
					break;

			case 5: exit(0);
		}
    }while(1);


	return 0;

}
