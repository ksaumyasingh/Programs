#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	ofstream fout;
	char data[25];
	fout.open("file34.text");
	cout<<"Enter the text : ";
	cin.getline(data,25);
	fout<<data;
	fout.close();
	ifstream fin;
	fin.open("file34.text");
	cout<<"Reverse contents of file"<<endl;
	fin.seekg(0,ios::end);
	int m=fin.tellg();
	char ch;
	for(int i=1;i<=m;i++)
	{
		fin.seekg(-i,ios::end);
		fin>>ch;
		cout<<ch;
	}

	fin.close();
	return 0;
}