//7. WOP for Storing Data in File and print it in Reverse Order.

//kumari saumya singh
//1913097
//D.O.C- 15-04-2021

#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{
	ofstream o;
	o.open("file7.txt");
	if(o.fail())
	{
		cout<<"\n unable to open file";
		exit(1);
	}

	char c;
	int x,n;
	do
	{
		cout<<"\n enter a character: ";
		cin>>c;
		o<<c;
		cout<<"\n 1.continue 2.stop: ";
		cin>>x;
	}while(x==1);


	n=o.tellp();
	o.close();

	ifstream i;
	i.open("file7.txt");

	cout<<"\n File contents in reverse order: "<<endl;
	i.seekg(0);
	i.seekg(n-1);

	int m=i.tellg();
	cout<<"\n m= "<<m<<endl;

	char k;

	while(m!=0)
	{
		i.read((char *)&k,sizeof(k));
		cout<<k<<endl;
		i.seekg(m-1);
		m=i.tellg();
	}
	i>>k;

	cout<<k<<endl;

	i.close();

	return 0;
}