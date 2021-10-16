#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char *p;
	int l;
	public:
		void get(char *z)
		{
			l=strlen(z);
			p=new char[l+1];
			strcpy(p,z);
		}
		void Show()
		{
		cout<<endl<<p<<l;
		}		
		char campare(String W)
		{
			if (strcmp(p,W.p)==0)
				return ('y');
			else
				return ('n');
		}
		
		String Add(String T)
		{
		String temp;
		temp.l=l+T.l;
		temp.p=new char[temp.l+1];
		strcpy(temp.p,p);
		strcat(temp.p,T.p);
		return(temp);	
		}
		
};
int main()
{
	String S1,S2,S3,S4;
	cout<<"enter the string 1"<<endl;
	char z[10];
	fflush(stdin);
	gets(z);
	S1.get(z);
	char s[10];
	cout<<"enter the string 2"<<endl;
	fflush(stdin);
	gets(s);
	S2.get(s);
	cout<<"string 1"<<endl;
	S1.Show();
	cout<<"\nstring 2"<<endl;
	S2.Show();
	char c=S2.campare(S1);     
	if (c=='y')
	cout<<"\nstrings are same";
	else
	cout<<"\nstrings not are same";
	S3=S1.Add(S2);
	S3.Show();
	return 0;
}