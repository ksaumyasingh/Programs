//kumari saumya singh
//roll no.=1913097
//date of creation=20-03-2021

#include<iostream>
#include<string>
using namespace std;
class String
{
	public:
	int strstr(string haystack,string needle)
	{
		if(needle.empty())
		{
			return 0;
		}
		int j,p,indicator;
		indicator=0;
		j=0;
		for(int i=0;i<haystack.length();i++)
		{
			if(haystack[i]==needle[j])
			{
				if(j==0)
				{
					p=i;
					indicator=1;
				}
				if(j+1==needle.length())
						return p;
				j++;
			}
			else
			{
				j=0;
				if(indicator!=0)
				{
					indicator=0;
					i=p;
				}
			}
		}
		return (-1);
	}
};
int main()
{
	String s;
	int i=s.strstr("mississippi","pi");
	cout<<i;
}