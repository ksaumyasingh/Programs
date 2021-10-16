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
		char x;
		int choice;
		do
		{
			cout<<"\nreading from keyboard:";
			cin>>x;
			cin.ignore();
			O<<x<<"\n";
			cout<<endl<<"\nread more?1.Yes 0.No";
			cin>>choice;
			cin.ignore();
		}while(choice);
		cout<<O.tellp();
		O.close();
	}
	
	ifstream I;
	ofstream O1;
	string mytext;
	I.open("c:/file/abc.txt");
	O1.open("c:/file/CDE.txt");
	if(I.fail()||O1.fail())
	cout<<"unable to open file";
	else
	{
		while(getline(I,mytext))
		{
			O1<<mytext;
			cout<<I.seekg(2);
			cout<<mytext;
		}
	}
	I.close();
	O1.close();
	return 0;		
}