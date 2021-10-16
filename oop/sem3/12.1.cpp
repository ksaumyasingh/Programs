//1. WOP for storing char / int / double data in file and print after reading from file.

//kumari saumya singh
//1913097
//D.O.C- 14-04-2021


#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream out;
	out.open("sample1.txt");

	char ch;
	cout<<endl<<"Read char: ";
	cin>>ch;
	out<<ch<<"\n";

	out.close();

	ifstream in;
	in.open("sample1.txt");

	if(in.fail())
	{
	   cout<<endl<<"Unable to open";
	}

	else
	{
	 	char d;
	 	in>>d;
	 	cout<<"\nChar is: "<<d;
		in.close();
	}

	ofstream out2;
	out2.open("sample2.txt");

	int i;
	cout<<endl<<"Read int: ";
	cin>>i;
	out2<<i<<"\n";

	out2.close();

	ifstream inn;
	inn.open("sample2.txt");

	if(inn.fail())
	{
	   cout<<endl<<"Unable to open";
	}

	else
	{
	 	int j;
	 	inn>>j;
	 	cout<<"\nInt is: "<<j;
		inn.close();
	}

	return 0;
}