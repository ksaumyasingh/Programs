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
			O<<x;
			cout<<endl<<"\nread more?1.Yes 0.No";
			cin>>choice;
			cin.ignore();
		}while(choice);
	}
	return 0;
		
}