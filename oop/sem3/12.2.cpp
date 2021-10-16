//2. WOP for storing char(s) upto users choice in file and then retrive
//and print it.(get, put, eof)

//kumari saumya singh
//1913097
//D.O.C- 14-04-2021


#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{

	ofstream o;

	o.open("file1.txt"); // o.open("d:/document/abc.txt")

	if(o.fail())
		cout<<"Unable to open file";

	else
	{
		cout<<"Writing data in File1\n";
		int c;
		char x;
		while(1)
		{
			cout<<"Enter data= ";
			cin>>x;
			o.put(x);

			cout<<"Do you want to add more data 1. Yes   2. No ";
			cin>>c;

			if(c!=1)
				break;


		}
		o.close();
	}

	ifstream in;
	cout<<"Data written in File";

	in.open("file1.txt");


	if(in.fail())
		cout<<"Unable to open file";
	else
	{
		char ch;
		while(in.eof()!=1)
		{
			ch=in.get();
			cout<<"\n"<<ch;
		}
		in.close();
	}


	return 0;
}