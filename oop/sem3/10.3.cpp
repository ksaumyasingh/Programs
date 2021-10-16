//3. Overload Unary(~)(M) and Binary (+)(F) and (==)(M) over String Class.
//kumari saumya singh
//1913097
//D.O.C- 31-03-2021

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class String
{
	char str[20];

	public:
		void get(const char a[])
		{
			strcpy(str,a);
		}

		void show()
		{
			cout<<"String = "<<str<<"\n";
		}

		void operator~()
		{
			strrev(str);
		}

		friend String operator+(String x,String y)
		{
			String temp;

			strcpy(temp.str,x.str);
			strcat(temp.str,y.str);

			return temp;
		}

		int operator ==(String x)
		{
			if(strcmp(x.str,str)==0)
				return 1;
			else
				return 0;
		}



};

int main()
{
	String S1,S2,S3;

	S1.get("olleH ");
	S2.get(" World");

	~S1;
	S1.show();

	S3=S1+S2;
	S3.show();

	if(S1==S2)
		cout<<"Both are same";
	else
		cout<<"Both are not same";

	return 0;
}