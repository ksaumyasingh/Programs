/*Create two objects of s1 and s2 of class STRING.

STRINGs1= “Banasthali”;
STRINGs2= “Vidyapith”;
Implement the following and write the output of each operation.
(i) Copy the content of s1 to s2.
(ii) Find the substring “Vidya” in s2.
(iii) Compare s1 and s2.*/

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class String
{
	char p[20];
	int l;
	public: 
			void get(char const z[])
			{
				strcpy(p,z);
				
			}
			
			void show()
			{
				cout<<"\nString is= "<<p<<"  "<<"length= "<<strlen(p);
			}
			
			int compare(String n)
			{
				if(strcmp(p,n.p)==0)
					return 1;
				else
					return 0;
					
			}
			
			void copy(String n)
			{
				strcpy(p,n.p);
				
			}
			
			void sub()
			{
				int l,f=0,k,c;
				char s[]="Vidya";
				
				l=strlen(p);
				for(int i=0;i<(l-5);i++)
				{
					k=0;
					c=0;
					for(int j=i;j<(i+5);j++)
					{
						if(s[k++]==p[j])
							++c;
					}
					
					if(c==5)
					{
						cout<<"Subsring Found";
						f=1;
						break;
					}
						
				}
				if(f==0)
					cout<<"Substring Not Found";
				
			}
};


int main()
{
	String a,b;
	int c,f;
	
	a.get("Banasthali");
	b.get("Vidyapith");
	a.show();
	b.show();

	do
	{
		cout<<"\n\nPress   1. Copy Content     2.Substring	  3. Compare	 4.Display    5.Exit";
		cout<<"\nEnter choice= ";
		cin>>c;
		switch(c)
		{
			case 1 :  b.copy(a);
					  b.show();
					  break;
					
								
			case 2: b.sub();
					break;
				
			case 3: f=a.compare(b);
					if(f==1)
						cout<<"\nStrings are same";
					else
						cout<<"\nStrings are not same";
					
					break;
					
			case 4: a.show();
					b.show();
					break;
					
		
										
			case 5: exit(0);  
		}
    }while(1);
	

	
	
	
	
	return 0;
}