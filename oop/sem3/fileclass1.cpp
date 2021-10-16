//kumari saumya singh
//1913097
//D.O.C- 20-03-2021

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream O;
	O.open("c:/file/abc.txt");
	if(O.fail())
	cout<<"unable to open file";
	else
	{
		int x;
		cout<<"reading from keyboard:";
		cin>>x;
		O<<x;
		O.close();
	}
	ifstream I;
	I.open("c:/file/abc.txt");
	if(I.fail())
	cout<<"unable to open file";
	else
	{
		int Y;
		cout<<"reading from keyboard:";
		cin>>Y;
		cout<<endl<<"writing on screen:"<<Y;
		I.close();
	}
	return 0;
}