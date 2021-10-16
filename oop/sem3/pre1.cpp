#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class student
{
	private:
	int rollno,Age;
	 char Name[20],course[20];
	static char dept[50];
	
	
	public:
		
		
		student()
		{
			rollno=0;
			Age=0;
			strcpy(Name,"");
			strcpy(course,"");
		}
	    
	    student(char nm[],int r,char c[],int a)
	    {
	    	rollno=r;
	    	Age=a;
	    	
	    	strcpy(Name,nm);
			strcpy(course,c);
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
     					if(s[i].rollno<s[j].rollno)
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
			cout<<endl<<"ROLL No."<<rollno;
			cout<<endl<<"course: "<<course;
			cout<<endl<<"Age: "<<Age;
			cout<<endl<<"dept: "<<dept;
	   	}
	   	
			
};


char student::dept[50]="Computer Science";

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
						cout<<"\nEnter NAME , age , course = ";
						fflush(stdin);
						gets(nm); 
						r=i+1;
						cout<<"Student's Roll Number = "<<r;
						cin>>cp>>a;
						
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