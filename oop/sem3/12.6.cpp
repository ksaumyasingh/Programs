//6. Modify Program 3 to perform random updation in file.
//append, ate,read, write function,seekg, seekp, tellg, tellp.

//kumari saumya singh
//1913097
//D.O.C- 15-04-2021

#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{
	ofstream in;
	in.open("input6.txt");
	if(in.fail())
	{
		cout<<"\n unable to open file";
		exit(1);
	}

	char c;
	int x;
	do
	{
		cout<<"\n enter a character: ";
		cin>>c;
		in<<c;
		cout<<"\n 1.continue 2.stop: ";
		cin>>x;
	}while(x==1);

	in.close();
	ofstream out;
	out.open("copy6.txt");
	if(out.fail())
	{
		cout<<"\n unable to open file";
		exit(1);
	}

	ifstream inn;
	inn.open("input6.txt");
	if(inn.fail())
	{
		cout<<"\n unable to open file";
		exit(1);
	}

	char z;
	while(inn.eof()!=1)
	{
		inn>>z;
		if(inn.eof()!=1)
		out<<z;
	}
	inn.close();
	out.close();
	int m;
	cout<<"\n ***Enter*** ";
	cout<<"\n 1.Add data in file";
	cout<<"\n 2.Modify data in file";
	cout<<"\n Enter your choice: ";
	cin>>m;
	fstream f;
	if(m==1)
	{
		f.open("copy6.txt",ios::in | ios::app);
		char l;
		cout<<"\n Enter character to add: ";
		cin>>l;
		f.write((char *)&l,sizeof(l));
		cout<<"\n Put pointer is at: "<<f.tellp();
	}

	else

	if(m==2)
	{
		f.open("copy6.txt",ios::ate | ios::in | ios::out);
		int n;
		cout<<"\n Enter data number to modify: ";
		cin>>n;
		char h;
		cout<<"\n Enter modified data: ";
		cin>>h;
		f.seekp(0);
		f.seekp(n-1);
		f.write((char *)&h,sizeof(h));
		cout<<"\n Put pointer is at: "<<f.tellp();
	}

	cout<<"\n File have:\n";
	cout<<"\n Get pointer is at: "<<f.tellg()<<endl;

	char k;

	f.seekg(0);

	while(f.eof()!=1)
	{
		f.read((char *)&k,sizeof(k));
		if(f.eof()!=1)
			cout<<k<<endl;
	}

	f.close();
	return 0;
}